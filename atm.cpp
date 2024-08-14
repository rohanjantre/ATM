#include<iostream>
using namespace std;
int main()
{
	int balance=100000,pin,choice,amount;
	cout<<"** welcome to SBI bank **"<<endl;
	lable:
	cout<<"enter the pin="<<endl;
	cin>>pin;
	while(pin==1234)
	{
		cout<<"1.balance"<<endl;
		cout<<"2.withdraw"<<endl;
		cout<<"3.deposite"<<endl;
		cout<<"4.exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:cout<<"balance="<<balance;
			break;
			case 2:cout<<"enter the amount="<<endl;
			cin>>amount;
			if(amount<=balance)
			{
				balance=balance-amount;
				cout<<"balance="<<balance;
			}
			else
			{
				cout<<"insufficent amout";
			}
			break;
			case 3:cout<<"enter the amount=";
			cin>>amount;
			balance=balance+amount;
			cout<<"balance="<<balance;
			break;
			case 4:
				cout<<"thank you";
				exit(0);
				break;
		}
	}
	cout<<"please enter the valide pin";
	goto lable;
}
