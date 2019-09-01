#include <iostream.h>
#include <math.h>
#include <conio.h>
double fact(int num)
{
	double factorial = 1;
	for(int j = 1;j<=num;j++)
	{
		factorial*=j;
	}
	return factorial;
}
void main()
{
	clrscr();
	double sum = 0;
	int u, n;
	cout<<"\n\n\n\nSum of series:\n1 - u/1! + u^2/2! - u^3/3! + ... + u^n/n!\n";
	cout<<"Enter  Value for u.\n";
	cin>>u;
	cout<<"Enter Value for Number of Terms.\n";
	cin>>n;
	for(int i = 0;i<=n;i++)
	{
		if(i%2==0)
		sum+= pow(u,i)/fact(i);
		else
		sum-= pow(u,i)/fact(i);
	}
	cout<<"Sum = ";
	for(int j = 0;j<=n;j++)
	{
	   cout<<"u^"<<j<<"/"<<j<<"!";
	   if(j!=n)
	   {
		if(j%2==0)
			cout<<" - ";
		else
			cout<<" + ";
	   }

	}
	cout<<"\n    = ";
	for(int k = 0;k<=n;k++)
	{
		cout<<u<<"^"<<k<<"/"<<k<<"!";
		if(k!=n)
		{
			if(k%2==0)
				cout<<" - ";
			else
				cout<<" + ";
		}
	}
	cout<<"\n    = ";
	for(int l = 0;l<=n;l++)
	{
		cout<<pow(u,l)<<"/"<<fact(l);
		if(l!=n)
		{
			if(l%2==0)
				cout<<" - ";
			else
				cout<<" + ";
		}
	}
	cout<<"\n    = "<<sum;
	getch();
}