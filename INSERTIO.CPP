#include <iostream.h>
#include <conio.h>

void InsertionSort(int A[], int size)
{       int upos,lpos,uvalue,lvalue;
	for(int i = 0;i<size;i++)
	{
		for(int j = 0;j<size;j++)
		{
			if(A[j]>A[j+1])
			{
				uvalue = A[j];
				lpos = j;
				j++;
				while(uvalue>A[j])
				{
					if(j==size-1)
					{	break;
					}
					else
						j++;
				}
				lvalue = A[j];
				upos = j;
				j = lpos;
				while(j<upos)
				{
					A[j] = A[j+1];
					j++;
				}
				A[upos] = lvalue;
			}
		}
	}
}

void main()
{
	clrscr();
	int * A, i = 0;
	char ch = 'y';
	cout<<"[+] Enter an Array A[].\n";
	while(ch=='y'||ch=='Y')
	{
		cout<<"      >>";
		cin>>A[i];
		i++;
		cout<<"[?] Do you wish to continue?\n";
		cin>>ch;
	}
	cout<<"[+] Array Created.\n";
	cout<<"[+] Unsorted Array.\n";
	for(int j=0;j<i;j++)
		cout<<"  "<<A[j];
	InsertionSort(A,i);
	cout<<"\n[+] Sorted Array.\n";
	for(int k=0;k<i;k++)
		cout<<"  "<<A[k];
	getch();
}