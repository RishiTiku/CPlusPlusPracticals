#include <iostream.h>
#include <conio.h>
#include <stdio.h>
struct employee
{
	int eno;
	char ename[30];
	float basic;
	float HRA;
	float CCA;
	float DA;
	float PF;
	float MA;
	float Nsal;//Nsal = basic + HRA + CCA + DA + MA
	float Gsal;//Gsal = Nsal + PF
}E[5];
void Getdata(employee & e)
{
	cout<<"Enter Name.\n";
	gets(e.ename);
	cout<<"Enter basic\n";
	cin>>e.basic;
	cout<<"Enter HRA\n";
	cin>>e.HRA;
	cout<<"Enter CCA\n";
	cin>>e.CCA;
	cout<<"Enter DA\n";
	cin>>e.DA;
	cout<<"Enter PF\n";
	cin>>e.PF;
	cout<<"Enter MA\n";
	cin>>e.MA;
	e.Nsal = e.basic + e.HRA + e.CCA + e.DA + e.MA;
	e.Gsal = e.Nsal + e.PF;
}
void Display(employee e)
{
	cout<<"eno: "<<e.eno<<endl;
	cout<<"Name: ";
	puts(e.ename);
	cout<<"Basic: "<<e.basic<<endl;
	cout<<"HRA: "<<e.HRA<<endl;
	cout<<"CCA: "<<e.CCA<<endl;
	cout<<"DA: "<<e.DA<<endl;
	cout<<"PF: "<<e.PF<<endl;
	cout<<"MA: "<<e.MA<<endl;
	cout<<"Nsal: "<<e.Nsal<<endl;
	cout<<"Gsal: "<<e.basic<<endl;
}
void main()
{
	clrscr();
	int flag = 0,choice;
	do
	{
	cout<<"Options>>\n";
	cout<<"1. Input 5 data\n";
	cout<<"2. Display Nsal and Gsal\n";
	cout<<"3. Display data wrt eno\n";
	cout<<"4. Exit\n";
	cin>>choice;
	switch(choice)
	{
	 case 1: flag = 1;
		 for(int i = 0;i<=4;i++)
		 {
		 cout<<"\tEmployee "<<i+1<<endl;
		 E[i].eno = i+1;
		 Getdata(E[i]);
		 }
		 break;
	 case 2: if(flag!=1)
		 {
		 cout<<"No entries present! Invalid request.\n";
		 }
		 else
		 {
			for(int i = 0; i<=4;i++)
			{	cout<<"\tEmployee "<<i+1<<endl;
				cout<<"Nsal = "<<E[i].Nsal<<endl;
				cout<<"Gsal = "<<E[i].Gsal<<endl;
			}
		 }
		 break;
	 case 3: int no;
		 if(flag!=1)
		 {
			cout<<"No entries present! Invalid request.\n";
		 }
		 else
		 {
			cout<<"Enter eno(1-5)\n";
			cin>>no;
			if(no>=1&&no<=5)
			Display(E[no-1]);
			else
			cout<<"Wrong Choice\n";

		 }
		 break;
	 default:cout<<"Wrong Choice Entered. Try again.\n";
	 }
	}while(choice!=4);
}