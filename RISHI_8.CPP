#include <iostream.h>
#include <conio.h>

int Search(int A[],int size,int term)
{
	int pos, flag=0;
	int upper=size-1,lower=0,mid;
	while(upper>=lower)
	{
		mid = (upper+lower)/2;
		if(A[mid]==term)
		{
			pos = mid;
			flag = 1;
			break;
		}
		else if(term<A[mid])
		{
			upper = mid-1;
		}
		else if(term>A[mid])
		{
			lower = mid+1;
		}

	}
	if(flag==1)
	{
		return pos;
	}
	else
		return -1;
}
void main()
{
	clrscr();
	char choice = 'y';
	int * A, i = 0, search;
	cout<<"Enter an Array A[].\n";
	while(choice=='y'||choice == 'Y')
	{
		cout<<">>";
		cin>>A[i];
		i++;
		cout<<"Do you wish to continue?  (y/n)\n";
		cin>>choice;
	}
	cout<<"Now Enter the Search term...\n>>";
	cin>>search;
	int result = Search(A,i,search);
	if(result==-1)
		cout<<"Search Item not found.\n";
	else
		cout<<"Search Item found at "<<result+1<<".\n";
	getch();
}