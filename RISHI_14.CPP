#include <iostream.h>
#include <conio.h>

struct node
{
	int a;
	node * next;
}* np = NULL, * start = NULL, * end = NULL;

void Display()
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

node * DelElements(node * s)
{
	np = s;
	s = s->next;
	delete np;
	return s;
}

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
	int flag = 0;
	char choice = 'y';
	do
	{
		if(start==end&&start==NULL)
		cout<<"List is Empty\n";
		else
		Display();
		cout<<"Do you want to add more elements?(y/n)\n";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		start = AddElements(start);
	}while(choice=='y'||choice=='Y');
	do
	{
	cout<<"Do you want to delete elements?(y/n)\n";
	cin>>choice;
	if(choice=='y')
	{start = DelElements(start);
	if(start==end&&start==NULL)
		{
			cout<<"List is Empty\n";
			flag = 1;
		}
		else
		Display();
	if(flag==1)break;}
	}while(choice=='y'||choice=='Y');
	while(start!=NULL)
	start = DelElements(start);
	getch();
}