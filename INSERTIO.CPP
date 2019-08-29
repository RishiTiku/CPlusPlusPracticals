#include <iostream.h>
#include <conio.h>

void InsertionSort(int A[], int size)
{       int upos,lpos,pos,uvalue,flag;//int lvalue;
	for(int i = 0;i<size;i++)
	{       flag = 0;
		for(int j = 0;j<size-1;)
		{       pos = 0;
			if(A[j]>A[j+1])
			{       flag = 1;
				uvalue = A[j];
				pos = lpos = j;
				pos++;
				while(pos<=size-2)
				{
					if(uvalue>A[pos+1])
						pos++;
					else
						break;
				}
				//lvalue = A[pos];
				upos = pos;
				pos = lpos;
				while(pos<upos)
				{
					A[pos] = A[pos+1];
					pos++;
				}
				A[upos] = uvalue;
				cout<<"[+]Step "<<i+1<<"th "<<j+1<<".\t";
				for(int k=0;k<size;k++)
					cout<<"  "<<A[k];
				cout<<"\n";
			}
			else
			{
				j++;
				if(j==size-1&&flag==0)
					return;
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
	cout<<endl;
	InsertionSort(A,i);
	cout<<"[+] Sorted Array.\n";
	for(int k=0;k<i;k++)
		cout<<"  "<<A[k];
	getch();
}