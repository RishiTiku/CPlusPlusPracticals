#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class travelplan
{
	private:
	char plancode[10];
	int not;
	char placename[15];
	int nob;
	public:
	void getdata()
	{
		cout<<"Enter Plan Code.\n";
		gets(plancode);
		cout<<"Enter Number of Travellers.\n";
		cin>>not;
		cout<<"Enter Place Name.\n";
		gets(placename);
		numbus();
	}
	void putdata()
	{
		cout<<"Plan Code = ";
		puts(plancode);
		cout<<"Number of Travellers = "<<not;
		cout<<"\nPlace name = ";
		puts(placename);
		cout<<"Number of Buses = "<<nob;
	}
	void numbus()
	{
		nob = not/50 + 1;
	}

};
void main()
{
	clrscr();
	travelplan A1;
	A1.getdata();
	A1.putdata();
	getch();
}