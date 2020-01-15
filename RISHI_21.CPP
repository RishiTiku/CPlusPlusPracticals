#include <iostream.h>
#include <conio.h>

struct node
{
	int a;
	node * next;
}* np = NULL,*start, * end;
node * End()
{
	if(start==NULL)
		return start;
	np = start;
	while(np!=NULL)
	{
		if(np->next==NULL)
			return np;
		np = np->next;
	}
	return np;
}
void AddElements()
{
	node * s = new node;
	cout<<"Enter Integer Data for new Node.\n";
	cin>>s->a;
	end = End();
	if(end==NULL)
		start = s;
	else
		end->next = s;
}

void main()
{
	clrscr();
	char choice = 'y';
	do
	{
		if(start==end&&start==NULL)
		{
			cout<<"Queue is Empty\n";
		}
		else
		{
			cout<<"Queue Reads:\n";
			np = start;
			while(np!=NULL)
			{
				cout<<np->a<<'\t';
				np = np->next;
			}
			cout<<endl;
			np = NULL;
		}
		cout<<"Do you want to add more elements?(y/n)\n";
		cin>>choice;
		if(choice=='y'||choice=='Y')
		AddElements();
	}while(choice=='y'||choice=='Y');
	while(1)
	{
		np = start;
		start = start->next;
		cout<<"Deleted "<<np->a<<".\n";
		delete np;
		if(start==NULL)
			break;
	}
	getch();
}