#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<iomanip.h>

class person
{
	char name[30];
	int age;
public:
	void readperson()
	{
	cout<<"Enter name of the person : ";
	gets(name);
	cout<<"Enter age : ";
	cin>>age;
	}
	void dispperson()
	{
	cout<<"Name : ";
	puts(name);
	cout<<"\tAge : "<<age<<"\n";
	}
};

class student:public person
{
	int rno;
	float avg;
public:
	void readstudent()
	{
	readperson();
	cout<<"Enter roll no. : ";
	cin>>rno;
	cout<<"Enter average marks : ";
	cin>>avg;
	}
	void disp_rno()
	{cout<<"Roll no. : "<<rno<<"\n";}
	float getavg()
	{return avg;}
};

class gradstudent:public student
{
	char subject[30];
	char wrkng;
public:
	void readit()
	{
	readstudent();
	cout<<"Enter main subject : ";
	gets(subject);
	cout<<"Working (Y/N) : ";
	cin>>wrkng;
	wrkng=toupper(wrkng);
	}
	void dispsubj()
	{
	cout<<"Subject : ";
	puts(subject);
	}
	char workstatus()
	{return wrkng;}
};

void main()
{
clrscr();

gradstudent grad[5];
int yr,num_wrkng=0,non_wrkng=0,div1=0,total=0;
float topscore=0,score,no,wperc,nwperc;
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout<<setprecision(2);
cout<<"Enter year : ";
cin>>yr;
for(int i=0;i<5;i++)
{
	cout<<"Enter details for graduate "<<i+1<<"\n";
	grad[i].readit();
	total++;
	if(grad[i].workstatus()=='Y')
		num_wrkng++;
	else
		non_wrkng++;
	score=grad[i].getavg();
	if(score>topscore)
	{
		topscore=score;
		i=no;
	}
	if(score>=60.0)
		div1++;
}
i=no;
cout<<"\n\t\tReport for the Year "<<yr;
cout<<"\n\t\t------------------------\n";
cout<<"Working graduates : "<<num_wrkng;
cout<<"\tNon working graduates : "<<non_wrkng;
cout<<"\n\tDetails of the Top Scorer\n";
grad[i].dispperson();
grad[i].dispsubj();
nwperc=((float)non_wrkng/(float)total)*100;
wperc=((float)div1/(float)total)*100;
cout<<"\tAverage marks : "<<grad[i].getavg()<<"\n";
cout<<"\t"<<nwperc<<" % of the graduates this year are non working &";
cout<<"\n"<<wperc<<" % are first divisioners\n";
getch();
}
