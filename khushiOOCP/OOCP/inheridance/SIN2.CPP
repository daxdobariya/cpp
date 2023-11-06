#include<iostream.h>
#include<conio.h>
class Parent
{
int p1,p2;
public:
Parent()
{
p1=p2=0;
}
Parent(int x1,int x2)
{
p1=x1;
p2=x2;
}
void print()
{
cout<<"P1::::"<<p1<<"P2:::"<<p2<<endl;
}
};
class Child:private Parent
{
int c1,c2,c3;
public:
Child()
{
c1=c2=c3=0;
}
Child(int y1,int y2,int y3,int x1,int x2):Parent(x1,x2)
{
	c1=y1;
	c2=y2;
	c3=y3;
}
void display()
{        print();
cout<<"c1:::"<<c1<<"c2:::"<<c2<<"c3:::"<<c3<<endl;
}
};
int main()
{
clrscr();
int y1,y2,y3,x1,x2;
cout<<"input y1 y2 y3 x1 x2"<<endl;
cin>>y1>>y2>>y3>>x1>>x2;
Child c1(y1,y2,y3,x1,x2);
c1.display();
getch();
return 0;
}