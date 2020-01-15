#include <iostream.h>
#include <conio.h>

struct node
{
	int a;
	node * next;
}* np = NULL, * start = NULL, * end = NULL;

node * AddElements(node * s)
{
	np = s;
	s = new node;
	cout<<"Enter Integer Data for new node created.\n";
	cin>>s->a;
	s->next = start;
	start = np;
	np = NULL;
	return s;
}
void Display()
{
	if(start==end&&start==NULL)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{	cout<<"Stack Reads:\n";
		np = start;
		while(np!=NULL)
		{
			cout<<np->a<<'\n';
			np = np->next;
		}
	}
}
void main()
{
	clrscr();
	char choice = 'y';
	start:
	do
	{
		Display();
		cout<<"Do you want to add more elements?(y/n)\n";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		start = AddElements(start);
	}while(choice=='y'||choice=='Y');
	while(start!=NULL)
	{
		Display();
		cout<<"Do You wish to delete Elements?(y/n)\n";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		{
			np = start;
			start = start->next;
			delete np;
		}
		else
			break;
	}
	Display();
	cout<<"Do you Wish To Exit?(y/n)\n";
	cin>>choice;
	if(choice=='y'||choice=='Y')
		goto exit;
	else
		goto start;
	exit:
	while(np!=NULL)
	{
		np = start;
		start = start->next;
		delete np;
	}
	getch();
}