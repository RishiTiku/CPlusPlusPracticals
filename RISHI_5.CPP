#include <iostream.h>
#include <conio.h>
#include <string.h>

class Salesman
{
	char name[11];
	float q1_sal,q2_sal,q3_sal,q4_sal,tot_sal;
	public:
		Salesman()
		{
			strcpy(name," ");
			q1_sal=q2_sal=q3_sal=q4_sal=tot_sal=0;
		}
		void calc_tot()
		{
			tot_sal = 0;
			tot_sal = q1_sal+q2_sal+q3_sal+q4_sal;
		}
		char *get_name() {return name;}
		float get_q1() {return q1_sal;}
		float get_q2() {return q2_sal;}
		float get_q3() {return q3_sal;}
		float get_q4() {return q4_sal;}
		float get_tot() {return tot_sal;}
		void Input()
		{
			cout<<"Enter Name.\n";
			cin.ignore();
			cin.getline(name,11);
			cout<<"Enter Sales for 4 quarters.\n";
			cin>>q1_sal>>q2_sal>>q3_sal>>q4_sal;
			calc_tot();

		}
		Salesman *max_sal(Salesman * S)
		{
			if(!S)
				S = this;
			else
			{
				float f1,f2;
				f1=S->get_tot();
				f2=this->get_tot();
				if(f1<f2)
					S = this;
			}
			return S;
		}
}* sp;
void print(Salesman * S)
{
	cout<<"Salesman with Max Sales.\n";
	cout<<"Name: ";
	cout.write(S->get_name(),11).put('\n');
	cout<<"Total Sales: "<<S->get_tot()<<endl;
}
void main()
{
	Salesman s[5];
	sp = &s[0];
	clrscr();
	for(int i = 0;i<=4;i++)
	{       cout<<"Salesman "<<i+1<<'\n';
		s[i].Input();
		sp = s[i].max_sal(sp);
	}
	print(sp);
	getch();
}