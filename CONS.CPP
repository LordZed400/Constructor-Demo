#include<iostream.h>
#include<conio.h>
#include<string.h>
class bank
{
	private:
		char name[40];
		int accno;
		float bal;
	public:
		bank(char n[50],int account,float balance)  //parameterized constructor
		{
			cout<<endl<<" Name: "<<n;
			cout<<endl<<" Account info: "<<account;
			cout<<endl<<" Balance: "<<balance;
			strcpy(name,n);
			accno=account;
			bal=balance;
		}

		bank()    //Default Constructor
		{
			cout<<endl<<" Name: ";
			cin>>name;
			cout<<" Account info: ";
			cin>>accno;
			cout<<" Balance: ";
			cin>>bal;
		}

		int info;
		bank(bank &a)		//Copy Constructor
		{
			strcpy(name,a.name);
			accno=a.accno;
			bal=a.bal;
		}

		void display()
		{
			cout<<endl<<" Name: "<<name;
			cout<<endl<<" Account info: "<<accno;
			cout<<endl<<" Balance: "<<bal;
		}

};

int main()
{
clrscr();
	bank t1;          //Default
	cout<<endl<<"-Default Constructor-";
	t1.display();
	cout<<endl<<"*********************************************";

	cout<<endl<<"-Parameterized Constructor-";
	bank t2("Niroula",005,10000);	//Parameterized
	cout<<endl<<"*********************************************";

	cout<<endl<<"-Copy Constructor-";
	bank t3(t1);	//Copied
	t3.display();
	cout<<endl<<"*********************************************";
	getch();
	return 0;
}
