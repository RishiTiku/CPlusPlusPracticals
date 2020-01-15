#include <fstream.h>
#include <conio.h>
#include <string.h>

class Student
{
	public:
	int rollno;
	char name[30];
	float marks[5];
	float total;
	float avg;
	Student()
	{
		total=avg=0.0;
		rollno=0;
		strcpy(name,"                              ");
	}
	void Input()
	{
		cout<<"Enter RollNo.\n";
		cin>>rollno;
		cin.ignore();
		cout<<"Enter name.\n";
		cin.getline(name,30);
		for(int i = 0;i<=4;i++)
		{
			cout<<"Enter Marks for Subject "<<i+1<<" out of 100"<<endl;
			cin>>marks[i];
		}
		total = avg =0;
		for(int j = 0;j<=4;j++)
		{
			total = total + marks[j];
		}
		avg = total/5;
	}
	void Display()
	{
		cout<<"\nRollNo: "<<rollno;
		cout<<"\nName: ";
		cout.write(name,30);
		for(int i = 0;i<=4;i++)
		{
			cout<<"\nMarks for Subject "<<i+1<<" out of 100: ";
			cout<<marks[i]<<".";
		}
		cout<<"\nTotal Marks out of 500: "<<total;
		cout<<"\nAverage Marks out of 100: "<<avg<<endl;

	}
}s;
int Search(int Sno = -1)
{
	ifstream fin("student.dat",ios::in|ios::binary);
	if(!fin)
	{
		cout<<"Couldn't open File.\n";
		return 0;
	}
	while(!fin.eof())
	{
		fin.read((char*)&s,sizeof(s));
		if(Sno>0)
		{
			if(Sno==s.rollno)
			{
				s.Display();
				return 1;
			}
		}
		else
		{
			if(s.avg>=75)
				s.Display();
		}
	}
	return 1;
}
int AddRecords(Student S)
{
	ofstream fout("student.dat",ios::app|ios::binary);
	if(!fout)
	{
		cout<<"Couldn't open file.\n";
		return 0;
	}
	else
	{
		fout.write((char*)&S,sizeof(S));
		fout.close();
		return 1;
	}

}

void main()
{
	clrscr();
	int choice;
	Student S;
	do
	{
		cout<<"1. Enter 5 Records.\n";
		cout<<"2. Search for Roll no.\n";
		cout<<"3. Students who got more than 75%\n";
		cout<<"4. Exit.\n";
		cout<<"Enter Your Choice. (1-4)\n";
		cin>>choice;
		switch(choice)
		{
			case 1:	for(int i = 0;i<=4;i++)
				{
					cout<<"Student "<<i+1<<endl;
					S.Input();
					if(!AddRecords(S))
						goto exit;
				}
				break;
			case 2: cout<<"Enter Rollno to be Searched.\n";
				cin>>choice;
				Search(choice);
				break;
			case 3:	Search();
				break;
			case 4: goto exit;
				break;
			default: cout<<"Wrong Choice. Try Again\n";
		}
	}while(1);
	exit:
	cout<<"Press any key to Exit.\n";
	getch();
}