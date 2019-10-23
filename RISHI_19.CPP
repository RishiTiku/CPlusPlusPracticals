#include <iostream.h>
#include <conio.h>
int front = 0, rear = -1;
void Display(int A[])
{
	for(int i = front;i<=rear;i++)
		cout<<A[i]<<"\t";
	cout<<endl;
}
void main()
{
	clrscr();
	int size = 10, flag = 0;
	char choice = 'y';
	int A[10];
	do
	{
	if(rear==-1)
	{
	cout<<"Empty Queue\n";
	}
	else if(rear==size-1)
	{
	flag = 1;
	cout<<"Queue Full!\n";
	}
	else
	Display(A);
	if(flag!=1)
	{
		cout<<"Do you want to push more elements?(y/n)\n";
		cin>>choice;
		if(choice=='Y'||choice=='y')
		{cout<<"Enter an Integer element\n";
		 cin>>A[rear+1];
		 cout<<"Now the Queue reads\n";
		 rear++;
		}
	}
	}while(choice=='Y'||choice=='y');
	getch();
}