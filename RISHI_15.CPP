#include <iostream.h>
#include <conio.h>
int top = -1, bottom = 0;
void Display(int A[])
{
	for(int i = top;i>=bottom;i--)
		cout<<A[i]<<endl;
}
void main()
{
	clrscr();
	int size = 10, flag = 0;
	char choice = 'y';
	int A[10];
	do
	{
	if(top==-1)
	{
	cout<<"Empty Stack\n";
	}
	else if(top==size-1)
	{
	flag = 1;
	cout<<"Stack Full!\n";
	}
	else
	Display(A);
	if(flag!=1)
	{
		cout<<"Do you want to push more elements?(y/n)\n";
		cin>>choice;
		if(choice=='Y'||choice=='y')
		{cout<<"Enter an Integer element\n";
		 cin>>A[top+1];
		 cout<<"Now the stack reads.\n";
		 top++;
		}
	}
	}while(choice=='Y'||choice=='y');
	getch();
}