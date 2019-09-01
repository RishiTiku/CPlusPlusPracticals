#include <iostream.h>
#include <conio.h>

void BubbleSort(int A[],int size)
{
	for(int i = 0;i<size-1;i++)
	{
		for(int j = 0;j<size-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				A[j] = A[j] + A[j+1];
				A[j+1] = A[j] - A[j+1];
				A[j] = A[j] - A[j+1];
			}
			cout<<"A[] after step "<<i<<" - "<<j<<">> ";
			for(int k = 0;k<i;k++)
			{
				cout<<A[k]<<" ";
			}
			cout<<'\n';
		}
	}

}
void main()
{
	clrscr();
	char choice = 'y';
	int * A, i = 0;
	cout<<"Enter an Array A[].\n";
	while(choice=='y'||choice == 'Y')
	{
		cout<<">>";
		cin>>A[i];
		i++;
		cout<<"Do you wish to continue?  (y/n)\n";
		cin>>choice;
	}
	cout<<"Unsorted Array A[] >> ";
	for(int j = 0;j<i;j++)
	{
		cout<<A[j]<<" ";
	}
	cout<<'\n';
	BubbleSort(A,i);
	cout<<"Sorted Array A[] >> ";
	for(int k = 0;k<i;k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<'\n';
	getch();
}