#include<iostream.h>
#include<conio.h>
class student
{
	private:
	static float rollno;
	static int count;
	float mark1,mark2,percent;

	public:
	void get()
	{
		cout<<"Enter marks for Subject 1: ";
		cin>>mark1;

		cout<<"Enter marks for Subject 2: ";
		cin>>mark2;

	}

	void calcpercent()
	{
		percent=mark1+mark2/2.0;
	}

	void grade()
	{
		if(percent>=95)
		{
			cout<<"Grade A"<<endl;
		}
		else if(percent>=80)
		{
			cout<<"Grade B"<<endl;
		}
		else if(percent>=60)
		{
			cout<<"Grade C"<<endl;
		}
		else if(percent>=40)
		{
			cout<<"Grade D"<<endl;
		}
		else
		{
			cout<<"Grade E"<<endl;
		}
	}

	static void showcount()
	{
		count++;
		cout<<"\nCount: "<<count<<endl;
	}

	static void showrollno()
	{
		rollno++;
		cout<<"\nRoll No. : "<<rollno<<endl;
	}

	void display()
	{
		cout<<"Marks of Subject 1: "<<mark1<<endl;
		cout<<"Marks of Subject 2: "<<mark2<<endl;
		cout<<"Percentage : "<<percent<<endl;
	}
};

float student::rollno=1981033;
int student::count;

void main()
{
	clrscr();
	student s1,s2;

	student::showrollno();
	s1.get();
	s1.calcpercent();
	s1.display();
	s1.grade();

	student::showcount();
	student::showrollno();
	s2.get();
	s2.calcpercent();
	s2.display();
	s2.grade();

	getch();
}