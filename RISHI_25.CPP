#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
class student
{
	int rollno;
	char name[30];
	float marks[5];
	float total;
	float avg;
	public:
	char * getgrade(float marks)
	{
		if(marks>=80)
		return "A1";
		else if(marks>=70)
		return "B1";
		else if(marks>=60)
		return "C1";
		else if(marks>=50)
		return "D1";
		else
		return "E1";
	}
	void getdata()
	{
		cout<<"Enter rollno.\n";
		cin>>rollno;
		cout<<"Enter name.\n";
		gets(name);
		cout<<"Marks for"<<endl;
		for(int i=0;i<=4;i++)
		{
			cout<<"Subject "<<i+1<<"\n";
			cin>>marks[i];
		}
		total = marks[0] + marks[1] + marks[2]
			 + marks[3] + marks[4];
		avg = total/5;
		}
	void putmarks()
	{
		cout<<"Roll no: "<<rollno<<endl;
		cout<<"Name: ";
		puts(name);
		cout<<"Marks for"<<endl;
		for(int  i = 0; i<=4;i++)
		{
			cout<<"\tSubject "<<i+1<<": "<<marks[i]<<"\n";
		}
		cout<<"Total marks: "<<total<<endl;
		cout<<"Average marks: "<<avg<<endl;
	}
	void putgrade()
	{
		cout<<"Roll no: "<<rollno<<endl;
		cout<<"Name: ";
		puts(name);
		cout<<"Grade for"<<endl;
		for(int  i = 0; i<=4;i++)
		{
			cout<<"\tSubject "<<i+1;
			cout<<"\n\tgrade: ";
			puts(getgrade(marks[i]));
		}
		cout<<"Final Grade: ";
		puts(getgrade(avg));
	}
}S[5];
void main()
{
	clrscr();
	int choice, flag = 0;
	do
	{
	cout<<"Options :\n";
	cout<<"1. Enter 5 student's data\n";
	cout<<"2. Display Total and Average\n";
	cout<<"3. Display Students grade.\n";
	cout<<"4. Exit.\n";
	cin>>choice;
	switch(choice)
	{
	  case 1:	for(int i = 0; i<=4;i++)
			{       cout<<"\tStudent "<<i+1<<endl;
				S[i].getdata();
			}
			flag = 1;
			break;
	 case 2:	if(flag!=1)
			{
				cout<<"No entries present! Invalid request.\n";
			}
			else
			{
				for(int i = 0; i<=4;i++)
				{	cout<<"\tStudent "<<i+1<<endl;
					S[i].putmarks();
				}
			}
			break;
	 case 3:        if(flag!=1)
			{
				cout<<"No entries present! Invalid request.\n";
			}
			else
			{
				for(int i = 0; i<=4;i++)
				{	cout<<"\tStudent "<<i+1<<endl;
					S[i].putgrade();
				}
			}
			break;
	 default:	cout<<"Wrong Choice Entered. Try again.\n";
	}
	}while(choice!=4);
}
