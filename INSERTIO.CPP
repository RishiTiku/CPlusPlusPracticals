#include <iostream.h>
#include <conio.h>

void InsertionSort(int A[], int size)
{       int upos,lpos,pos,uvalue,lvalue;
	for(int i = 0;i<size;i++)
	{
		for(int j = 0;j<size-1;)
		{       pos=0;
			if(A[j]>A[j+1])
			{
				uvalue = A[j];
				pos = lpos = j;
				pos++;
				/*Is it possible that pos is being incremented but A[pos] is not changing?
				  The values for random() also do not change in loop.
				  Is it that the condition is being evaluated at every iteration, but the
				  values of Array[index] do not change with change in index?*/
				/*while(uvalue>A[pos])//LoopHole??
				{
					if(pos==size-1)
					{	break;
					}
					pos++;
				}*/
				while(1)
				{
					if(pos==size-1)
					{
						if(uvalue>A[pos])
							pos++;
						break;
					}
					else if(uvalue>A[pos+1])
					{
						pos++;
					}
					else
					{
						break;
					}
				}
				lvalue = A[pos];
				upos = pos;
				pos = lpos;
				while(pos<upos)
				{
					A[pos] = A[pos+1];
					pos++;
				}
				A[upos] = uvalue;
				cout<<"[+]Step "<<i<<"th "<<j<<".\n";
				for(int k=0;k<size;k++)
					cout<<"  "<<A[k];
				cout<<"\n";
			}
			else
			j++;
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