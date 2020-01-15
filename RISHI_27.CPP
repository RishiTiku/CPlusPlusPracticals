#include <iostream.h>
#include <conio.h>
int B[30][30], s1, s2;
void Display(int C[30][30], int rSize,int cSize,int c=-1)
{	int ctr = 1, sum = 0;
	clrscr();
	cout<<"2-D Array Looks Like...\n";
	for(int i = 0; i<rSize; i++)
	{
		for(int j = 0; j<cSize;j++)
		{
			if(ctr>c&&c!=-1)
			{       if(ctr==c+1)
					cout<<"|..|\t";
				else
				cout<<"_\t";
			}
			else
			{
				cout<<C[i][j]<<"\t";
				sum = sum+C[i][j];
			}
			ctr++;
		}
		if(c==-1)
			cout<<"  |\t"<<sum;
		cout<<endl<<endl;
		sum = 0;
	}
	if(c==-1)
	{
		for(int k=0;k<cSize;k++)
		cout<<"__\t";
		cout<<"__|\t^\n\n";
		for(int i=0 ;i<cSize;i++)
		{
			for(int j=0;j<rSize;j++)
			{
				sum = sum + C[j][i];
			}
			cout<<sum<<"\t";
			sum = 0;
		}
		cout<<"      < Sum";

	}
}
void AddElements()
{
	cout<<"Enter Row Size.\n";
	cin>>s1;
	cout<<"Enter Column Size.\n";
	cin>>s2;
	cout<<"Enter integer data into Array.\n";
	int ctr = 0, elm;
	Display(B,s1,s2,ctr);
	for(int i = 0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			cout<<"Row "<<i+1<<" Column "<<j+1<<endl;
			cin>>elm;
			B[i][j] = elm;
			if(elm!=B[i][j])
				B[i][j] = elm;
			ctr++;
			Display(B,s1,s2,ctr);
		}
	}
}
void main()
{
	clrscr();
	AddElements();
	Display(B,s1,s2);
	getch();
}
