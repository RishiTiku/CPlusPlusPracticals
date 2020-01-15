#include <iostream.h>
#include <conio.h>

int rear = -1, front = 0,size=10;

int Choice(int q)
{
	char choice, *  str[3] = {"Do you wish to Enter an Element?",
			  "Do you wish to Delete an Element?",
			  "Do you wish to Exit?"};
	cprintf(str[q-1]);
	cout<<"(y/n)\n";
	cin>>choice;
	if(choice=='Y'||choice=='y')
		return 1;
	else
		return 0;
}

int QExists()
{
	if(rear==-1)
		return 0;
	else
		return 1;
}

void Display(int A[])
{
	if(rear==-1)
	{
		cout<<"Empty Queue.\n";
		return;
	}
	cout<<"Queue Looks Like.\n";
	if(front>=0&&rear>=front)
	{
		for(int i = front;i<=rear;i++)
			cout<<A[i]<<'\t';
		cout<<endl;
		return;
	}
	if(front>0&&rear<front)
	{
			for(int i=front;i<=size-1;i++)
				cout<<A[i]<<'\t';
			for(int j=0;j<=rear;j++)
				cout<<A[j]<<'\t';
			cout<<endl;
			return;
	}
}

int CheckFull()
{
	if((front==0&&rear==size-1)||(front>0&&rear==front-1))
		return 1;
	return 0;
}

int AddElements(int A[])
{
	if(!CheckFull())
	{
		cout<<"Enter an Integer Element.\n";
			if(rear<size-1)
			rear++;
			else if(rear==size-1)
			rear=0;
			cin>>A[rear];
			Display(A);
			return 1;
	}
	else
	{
		cout<<"Queue is Full.\n";
		return 0;
	}
	return 0;
}

int DelElements()
{
	if(QExists())
	{
		if(front==rear)
		{
			front=0;
			rear=-1;
		}
		else if(front<size-1)
			front++;
		else if(front==size-1)
			front=0;
			return 1;
	}
		else
	{
		cout<<"Queue doesn't exist.\n";
		return 0;
	}
	return 0;
}

void main()
{
	clrscr();
	int Q[10];
	do
	{
		do
		{
			if(!CheckFull()&&Choice(1))
			{
				AddElements(Q);
			}
			else
				break;
		}while(1);
		if(Choice(3))
			break;
		do
		{
			if(QExists()&&Choice(2))
			{
				DelElements();
				Display(Q);
			}
			else
				break;
		}while(1);
	}while(1);
	getch();
}
