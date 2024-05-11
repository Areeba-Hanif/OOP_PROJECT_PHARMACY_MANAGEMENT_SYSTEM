

//--------------------------------------------------------------------     OOP PROJECT ------------------------------------------------------------------------------//
//---------------------------------------------------------------   COURSE INSTRUCTOR : SIR AWAIS AHMED ------------------------------------------------------------------------------//
//----------------------------------------------------SUBMITTED BY :  AREEBA HANIF (SP22-BSSE-0041) ------------------------------------------------------------------------------//

#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include"signup.h"
#include"functions.h"


using namespace std;


class Registration{
	
	public:

void display_menu(){
	system("cls");

	int choice;
      
        cout<<"********************************************* REGISTRATION CHOICES *****************************************************\n\n";
        cout<<"________________________________________________________________________________________________________________________"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
        
        
        
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"Thanks for using this program\nThis program is created by Ayesha & Areeba ";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                      
        }
	}
};

//class Invoice;

 class medicines_order: public Registration{
 	
 	friend void receipt(medicines_order);

	
    int quantity[8];
	int total_items;
	string medicine_name;
	string medicine_order_date;
	string user_address;
	int amount[16];
	int total_amount[16];
	
	public:
		
	int med_id[1000]={0001,0002,0003,0004,0005,0006,0007,0001,0001};
	string med_names[100]={"probiotics","vitamin_c","acid free ","Risek(20mg)","marino tablet","maxico tablet","amino zinc","bernex","LowPlat 5","Surbex(500mg)"};
    void modify_order();
    void take_order();
    void delete_order();
	int id;
	
	void display(){
		
	system("cls");
	int choice;
    cout<<"Press 1 for Take order "<<endl;
    cout<<"Press 2 for Modify  order "<<endl;
    cout<<"Press 3 for Delete order "<<endl;
    
    
	cout<<"\nEnter your choice :"<<endl;
	cin>>choice;   
		ofstream myfile("database.text",ios::app);
		myfile<<choice<<endl;
		myfile.close();
	
	switch(choice){
		case 1:
			take_order();
			break;
		case 2:
			modify_order();
			break;
		case 3:
			delete_order();
			break;
		default:
		    cout<<"Invalid Input "<<endl;	
	}		
}
	
};

class Medicine_details{
	
 	public:
 		void details_main(){
 			int a;
 			cout<<"PRESS 1 for Medicine Names :"<<endl;
 			cout<<"PRESS 2 for Medicine Price :"<<endl;
 			cout<<"PRESS 3 for Medicine Quantity :"<<endl;
 			cout<<"PRESS 4 for Medicine Manufacturer :"<<endl;
			cout<<"PRESS 5 for Medicine Number :"<<endl;
 			cout<<"PRESS 6 for Medicine Expiry :"<<endl;
 			cout<<"PRESS 7 for Medicine Type :"<<endl;
 			cout<<"ENTER YOUR CHOICE :"<<endl;
 			cin>>a;
 			ofstream myfile("database.text",ios::app);
		myfile<<a<<endl;
		myfile.close();
 			switch(a){
 				
 				case 1:
 					names();     
 					break;
 				case 2:
 					price();
 					break;
 				case 3:
 					quantity(); 
 					break;
 				case 4:
 					manufacture();
 					break;
 				case 5:
 					medicine_number();	
 					break;
				case 6:
					expiry();
 					break;
			    case 7:
			    	type();
 					break;
 				default:
 					cout<<"INVALID INPUT "<<endl;
 					
			 }
		 }
 		  };               	

class User{
	
	Registration r1;
	
   
	public:
	void display_main(){

	
	int choice;

cout<<"************************************************************************************************************************\n\n\n";
        
cout<<"\t\t\t\t\tPHARMACY MANAGEMENT SYSTEM\n\n";
cout<<"**********************************************\tMENU   ****************************************************************\n\n";
cout<<"1. REGISTRATION"<<endl;
cout<<"2 .ORDER "<<endl;
cout<<"3 .MEDICINES"<<endl;
cout<<"4 .SHOW BILL"<<endl;

cout<<"Enter your choice :"<<endl;
cin>>choice;
 	ofstream myfile("database.text",ios::app);
	myfile<<choice<<endl;
	myfile.close();

 switch(choice){
 	case 1:
 	{
	 r1.display_menu();
	 break;
}
	case 2:	
{
    medicines_order  m1; 
	m1.display();

	break;
}
	
	case 3:
		{
		
	

    Medicine_details M1;
    M1.details_main();
	break;
}
	case 4:
	{   
	    
	    medicines_order  o1;
	    cout<<"\n"<<"******************************************************************************"<<endl;
		cout<<" \t\t\t TOTAL BILL "<<endl;
	    cout<<"******************************************************************************"<<endl;
		
        receipt(o1);
		break;
}
		

	
	
	

	
 }
}
};



 void medicines_order::take_order(){
 	            system("cls");
 	            int choice[20],price[8];
 		        cout <<"\nAdd Order Details\n";
 		        cout<<"Enter Date (dd-mm-yy): ";
 		 
                cin>>medicine_order_date;
                ofstream myfile("database.text",ios::app);
		        myfile<<medicine_order_date<<endl;
		        myfile.close();


	
	            cout <<"*****************************************************************************\n";
				cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(RM) "<<endl;
				cout <<"*****************************************************************************\n";
                cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			Rs 250      |"<<endl;
                cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		Rs 300      |"<<endl;
                cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		Rs 200      |"<<endl;
                cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Risek(20mg)"<<"		        Rs 400      |"<<endl;
                cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	Rs 100      |"<<endl;
                cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		Rs 50       |"<<endl;
                cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		Rs 70       |"<<endl;
                cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			Rs 150      |"<<endl;
                cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    LowPlat 5"<<"			Rs 300      |"<<endl;
                cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Surbex(500mg)"<<"		Rs 500      |"<<endl;
                cout<<"____________________________________________________________________________"<<endl;
                
	            cout << "  " ;
	            
					 cout<<"Enter Total number of items :"<<endl;
					 cin>>total_items;
			         myfile<<total_items<<endl;
		             myfile.close();
						
					
						for (int i=0; i<total_items; i++){
		                    
		     cout << "Please enter your selection for medicine name : "<<endl;
		     cin>> choice[i];
		     myfile<<choice[i]<<endl;
		        myfile.close();
		     cout<< "Medicine Name:   ";
		     switch(choice[i]){
			case 1:
				cout<<"Probiotics"<<endl;
				cout << "How many medicine do you want: ";
                cin >>quantity[i];
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 250;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
				break;
			case 2:
			    cout<<"vitamin c 500g"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 300;
                cout << "The amount You need to pay for this medicine  is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;
			case 3:
		    	cout<<"acid free"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 200;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;	
			case 4:
			    cout<<"Risek (500mg)"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 400;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;	
			case 5:
			    cout<<"marino tablet"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                amount[i] = quantity[i] * 100;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;
			case 6:
			    cout<<"maxi cal tablet"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 50;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;	
			case 7:
			    cout<<"amino zins tablet"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 70;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;	  	  
			case 8:
			    cout<<"burnex"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 150;
                cout << "The amount You need to for this medicine pay is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;
			case 9:
			    cout<<"LowPlat 5 "<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 300;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;	
			case 10:
			    cout<<"Surbex (500mg)"<<endl;
			    cout << "How many medicine do you want: ";
                cin >>quantity[i] ;
                myfile<<quantity[i]<<endl;
		        myfile.close();
                amount[i] = quantity[i] * 500;
                cout << "The amount You need to pay for this medicine is: " << amount[i]<<" RS"<<endl;
                total_amount[i]=amount[i];
			    break;
		        default:
		  	    cout<<"Invalid ID"<<endl;
		}

     
                      
	
}
	cout<<"==========================================================================="<<endl;
    cout << "Order Taken Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "Go to Reciept Menu to Pay The Bill"<<endl;
    cout<<"==========================================================================="<<endl;

	system ("PAUSE");


	system("cls");

			}


 void medicines_order::modify_order()
 {system("cls");
	cout<<"Enter id of data which you waant to update :"<<endl;
	cin>>id;
	ofstream myfile("database.text",ios::app);
	myfile<<id<<endl;
	myfile.close();
	for(int i=0;i<med_id[i];i++){
	
		if(id==med_id[i]){
			

	cout<<"Old data of medicines "<<endl;

	cout<<"Name: "<<med_names[i]<<endl;

	cout<<"ID: "<<med_id[i]<<endl;


	cout<<"\nEnter new data"<<endl;
    
	cout<<"Enter medicine id:"<<endl;
	cin>>med_id[i];
	ofstream myfile("database.text",ios::app);
myfile<<med_id[i]<<endl;
	myfile.close();
    cout<<"Enter medicine name:"<<endl;
	cin>>med_names[i];
	myfile<<med_names[i]<<endl;
	myfile.close();
		break;
}
		}

	

	}
			
void medicines_order::delete_order(){
	system("cls");
     int total=1;       
     int id;  
     if(total==0)

	{
     cout<<"No data is entered"<<endl;

	}
	else{

		int a;

	    cout<<"Press 1 to delete all record"<<endl;

		cout<<"Press 2 to delete specific record"<<endl;

		cin>>a;
	ofstream myfile("database.text",ios::app);
    myfile<<a<<endl;
	myfile.close();
		if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{
				cout<<"Enter the medicine id which you wanted to delete"<<endl;

				cin>>id;
	ofstream myfile("database.text",ios::app);
myfile<<id<<endl;
	myfile.close();
				for(int i=0;i<total;i++)

				{

					if(id==med_id[i])

					{

						for(int j=i;j<total;j++)

						{

						med_id[j]=med_id[j+1];

					
				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}	

			else 
			{
             cout<<"Invalid input";

			}
}
}		   	          
                	

//class  Invoice:public medicines_order{
	
	//public:
	
	  
	  
	
	void receipt(medicines_order o1){
		int sum=0;
		cout<<"\n\n";
		cout<<"Order Date :"<<o1.medicine_order_date<<endl;
		cout<<"==============================================================================="<<endl;
		cout<<"MEDICINE NAME\t\tMEDICINE QUANTITY\t\tEACH MEDICINE PRICE          "<<endl;
		cout<<"==============================================================================="<<endl;
		for (int i=0; i<o1.total_items; i++){
			    cout<<" "<<o1.med_names[i]<<"\t\t\t"<<o1.quantity[i]<<"\t\t\t\t"<<o1.amount[i]<<endl;
			    sum += o1.total_amount[i];	
			
		 }
		cout<<"==============================================================================="<<endl;
		cout<<"TOTAL AMOUNT IS : "<<sum<<endl;
		cout<<"==============================================================================="<<endl;
	}	
 //};


int main(){	
system("color E0");

User u1;

u1.display_main();
//u1.display_main();
//u1.display_main();
//u1.display_main();
//u1.display_main();
//u1.display_main();
//u1.display_main();
//u1.display_main();






 


}
