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
	s->next = np;
	np = NULL;
	return s;
}

void main()
{
	clrscr();
	char choice = 'y';
	do
	{
		if(start==end&&start==NULL)
		{
			cout<<"List is Empty\n";
		}
		else
		{
			cout<<"Front to Back, List Reads:\n";
			np = start;
			while(np!=NULL)
			{
				cout<<np->a<<"\t";
				np = np->next;
			}
			cout<<endl;
		}
		cout<<"Do you want to add more elements?(y/n)\n";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		start = AddElements(start);
	}while(choice=='y'||choice=='Y');
	while(np!=NULL)
	{
		np = start;
		start = start->next;
		delete np;
	}
	getch();
}
