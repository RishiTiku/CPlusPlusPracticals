#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class bankaccount
{
	private:
	char name[30];
	int accno;
	char acctype;
	double amount;
	public:
	void putdata()
	{
		cout<<"Name = ";
		puts(name);
		cout<<"Account Number = "<<accno<<endl;
		cout<<"Account Type = ";
		if(acctype=='s'||acctype=='S')
		cout<<"Savings\n";
		else
		cout<<"Current\n";
		cout<<"Amount = "<<amount<<endl;

	}
	void getdata(int ano)
	{
		cout<<"Enter Name.\n";
		cin>>name;
		accno = ano;
		for(;;)
		{
			cout<<"Enter Account Type(C/S)\n";
			cin>>acctype;
			if(acctype=='s'||acctype=='S'||acctype=='c'||acctype=='C')
			break;
		}
		cout<<"Enter Amount.\n";
		cin>>amount;
	}
	void modify(char a,double money)
	{
		if(a=='w')
		{
			if(amount>=money)
			{
				amount = amount - money;
				cout<<money<<" has been withdrawn from your account\n";
				cout<<"New balance = "<<amount<<endl;
			}
			else
			cout<<"NOT ENOUGH MONEY\n";
		}
		else
		{
			amount = amount + money;
			cout<<money<<" has been deposited to your account\n";
			cout<<"New balance = "<<amount<<endl;
		}

	}

}B[10],b[5];
void main()
{
	clrscr();
	int choice, c = 0, no, m;
	for(int i = 0;i<=9;i++)
	{
	B[i].getdata(i+1);
	}
	do
	{
	cout<<"\tBank Account\n";
	cout<<"1. Create a New Bank Account.\n";
	cout<<"2. Withdraw Money.\n";
	cout<<"3. Deposit Money.\n";
	cout<<"4. Display Account Details.\n";
	cout<<"5. Exit\n";
	cin>>choice;
	switch(choice)
	{
	case 1: if(c>=5)
			cout<<"Max new entries reached for this session.\n";
		else
		{
			c++;
			b[c-1].getdata(10+c);
			cout<<"New account is as follows\n";
			cout<<"____________________________________\n";
			b[c-1].putdata();
		}
		break;
	case 2: cout<<"Enter account number(0-"<<10+c<<")\n";
		cin>>no;
		cout<<"Enter Money\n";
		cin>>m;
		if(no<=10)
		{
			B[no-1].modify('w',m);
		}
		else if(no>10&&no%10<=c)
		{
			b[(no%10)-1].modify('w',m);
		}
		else
		cout<<"Wrong Choice.\n";
		break;
	case 3: cout<<"Enter account number(0-"<<10+c<<")\n";
		cin>>no;
		cout<<"Enter Money\n";
		cin>>m;
		if(no<=10)
		{
			B[no-1].modify('d',m);
		}
		else if(no>10&&no%10<=c)
		{
			b[(no%10)-1].modify('d',m);
		}
		else
		cout<<"Wrong Choice.\n";
		break;
	case 4: cout<<"Enter Account Number(0-"<<10+c<<")\n";
		cin>>no;
		if(no<=10)
		{
			B[no-1].putdata();
		}
		else if(no>10&&no%10<=c)
		{
			b[(no%10)-1].putdata();
		}
		else
		cout<<"Wrong Choice.\n";
		break;
	case 5: break;
	default: cout<<"Wrong Choice!\n";
	}
	cout<<"\n\n";
	}while(choice!=5);
	getch();
}