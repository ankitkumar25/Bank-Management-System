		// Bank Management System

#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
	private:
		float balance;
		char name[20];
		char address[20];
		char type[10];
	 public:
	 	void openAccount();
		 void deposit();
		 void withdraw();
		 void display();
		 	
};

void Bank::openAccount()
{
	int n;
	cout<<"Enter name : "<<endl;
	cin.ignore(); // To clear buffer
	
	cin.getline(name,20);
	
	cout<<"Enter Address : "<<endl;
	cin.ignore(); // To clear buffer
	cin.getline(address,20);
	
	cout<<"Enter Type of Account (By default it is current): "<<endl;
	cout<<"1.Savings "<<endl;
	cout<<"2.Current "<<endl;
	cout<<"Enter Your Choice: "<<endl;
	cin>>n;
	if(n==1)
		strcpy(type,"Saving");
	else 
		strcpy(type,"Current");

		
	
	cout<<"Enter Balance to deposit : "<<endl;
	cin>>balance;
	
	cout<<"Your Account has been created successfully...!!"<<endl;		
}

void Bank::deposit()
{
	float amt;
	cout<<"Enter Amount to deposit : "<<endl;
	cin>>amt;
	balance = balance +amt;
	cout<<"Your Amount has been deposited successfully...!!"<<endl;		
}

void Bank::withdraw()
{
	float amt;
	cout<<"Enter Amount to withdraw : "<<endl;
	cin>>amt;
	if(amt>balance)
	{
		cout<<"Insufficient balance!!"<<endl;
		cout<<"Last Transaction was unsucessfull..!!";	
		
	}else
	{
		balance = balance -amt;
		cout<<"Your Account has been withdrawn successfully...!!"<<endl;		
	}
		
}
void Bank::display()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Address : "<<address<<endl;
	cout<<"Type : "<<type<<endl;
	cout<<"Available Amount : "<<balance<<endl;
}
int main()
{
	
	
	Bank b1;
	int option;
	do
	{
		cout<<"\n \n \t \t  ----------------------------------------";
			cout<<" \n \t \t  ||\t BANK MANAGEMENT SYSTEM \t||"<<endl;
			cout<<"\t \t  ----------------------------------------"<<endl;
		cout<<" \t \t  \t \t MENU \t \t \t"<<endl;
		cout<<" \t \t  ---------------------------------------"<<endl;
		cout<<" \t \t  |\t1.Open Account \t \t \t|"<<endl;
		cout<<" \t \t  |\t2.Deposit Money \t \t|"<<endl;
		cout<<" \t \t  |\t3.Withdral Money \t \t|"<<endl;
		cout<<" \t \t  |\t4.Display Account\t \t|"<<endl;
		cout<<" \t \t  |\t5.Exit \t \t \t \t|"<<endl;
		cout<<" \t \t  |\t6.Clear Screen \t \t \t|"<<endl;
		cout<<" \t \t  ---------------------------------------"<<endl;
	
		cout<<"Enter your choice : "<<endl;
		cin>>option;
	
		switch(option)
		{	
			case 5: cout<<"Thank you for your support.!";
					break;
			case 1: b1.openAccount();
					break;
			case 2: b1.deposit();
					break;
			case 3: b1.withdraw();
					break;
			case 4: b1.display();
					break;
			case 6: 
					system("cls");
					break;
					
			default:
				 cout<<"Invalid Input"<<endl;
					
			
		}
		
		
		}while(option!=5);

	
	
	
	return 0;
}
// By Ankit Kumar Tiwari
// GitHub Link: https://github.com/ankitkumar25/Bank-Management-System
