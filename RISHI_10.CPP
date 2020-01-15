#include <iostream.h>
#include <conio.h>

void SelectionSort(int A[],int size)
{       int pos = 0, step = 0,small=0,temp;
	for(int i = 0;i<size-1;i++)
	{
		small = A[i];
		for(int j = i;j<size;j++)
		{
			if(A[j]<small)
			{
				small = A[j];
				pos = j;
			}
		}
		step++;
		temp = A[i];
		A[i] = A[pos];
		A[pos] = temp;
		cout<<" A[] after step: "<<step<<" >> ";
		for(int k = 0;k<size;k++)
		{
			cout<<A[k]<<" ";
		}
		cout<<'\n';
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
	SelectionSort(A,i);
	cout<<" Sorted Array A[]  >> ";
	for(int k = 0;k<i;k++)
	{
		cout<<A[k]<<" ";
	}
	cout<<'\n';
	getch();
}