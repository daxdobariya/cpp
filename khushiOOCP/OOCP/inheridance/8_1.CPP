#include<iostream.h>
#include<conio.h>
class B
{
	int a;
	public:
	int b;
	void set_ab()
	{
	a=5; b=10;
	}
	int get_a(void)
	{
		  return a;
	}
	void show_a(void)
	{
		cout<<"a=="<<a<<endl;
	}
};
class D:public B
{
int c;
public:
void mul(void)
{
c=b*get_a();
}
void display(void)
{
cout<<"a=="<<get_a()<<endl;
cout<<"b=="<<b<<endl;
cout<<"c=="<<c<<endl;
}
};
int main()
{
clrscr();
D d;
d.set_ab();
d.mul();
d.show_a();
d.display();
d.b=20;
d.mul();
d.display();
getch();
return 0;
}