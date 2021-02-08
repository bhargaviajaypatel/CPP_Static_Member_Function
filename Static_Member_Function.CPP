#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		static int x,y;

	public:
		static void display()
		{
			cout<<"Value of x: "<<demo::x<<endl;
			cout<<"Value of y: "<<demo::y<<endl;
		}
};

int demo::x=10;
int demo::y=20;

void main()
{
	clrscr();
	demo a;

	cout<<"Printing through object name: "<<endl;
	a.display();

	cout<<"Printing through class name: "<<endl;
	a.demo::display();

	getch();
}