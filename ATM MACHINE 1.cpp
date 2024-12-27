#include<iostream>
using namespace std;
int main()
{
	int balance = 1000;
	int choice;
	
	do
	{
		cout<<"ATM Machine: "<<endl;
		cout<<"1. Check Balance: "<<endl;
		cout<<"2. With Draw Money: "<<endl;
		cout<<"3. Deposit Money: "<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Your Balance is: $" <<balance<<endl;
				break;
			case 2:
				int withdrawamount;
				cout<<"Enter With Draw Amount: $";
				cin>>withdrawamount;
				if(withdrawamount <= balance)
				{
					balance -= withdrawamount;
					cout<<"With Draw Amount Success.Your New Balance is: $"<<balance<<endl;
				}
				else
				{
					cout<<"Insufficant Balance. "<<endl;
					break;
					
					case 3: 
					int depositamount;
					cout<<"Enter Deposit Amount: $";
					cin>>depositamount;
					balance+=depositamount;
					cout<<"Deposit Successfull.Your New Balance is: "<<balance<<endl;
					break;
					case 4:
						cout<<"Exit ATM...";
						break;
						
					default:
						cout<<"Invalid Choice.";
				}
				
		}
	}while(choice != 4);
	
	return 0;
}