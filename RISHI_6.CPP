#include <fstream.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	clrscr();
	char ch;
	ifstream filin;
	ofstream Upper("Upper.txt",ios::out), Lower("Lower.txt",ios::out), Digit("Digit.txt",ios::out), Other("Other.txt",ios::out);
	filin.open("Mix.txt",ios::in);
	while(filin)
	{
		filin.get(ch);
		if(isalpha(ch))
		{
			if(isupper(ch))
			{
				Upper<<ch;
			}
			else
			{
				Lower<<ch;
			}
		}
		else if(isdigit(ch))
		{
			Digit<<ch;
		}
		else
		{
			Other<<ch;
		}
	}
	cout<<"Work Done!\n";
	filin.close();
	Upper.close();
	Lower.close();
	Digit.close();
	Other.close();
	getch();

}