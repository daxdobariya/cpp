#include<iostream.h>
#include<conio.h>
class A
{
int a1,a2;
public:
A()
{
a1=a2=0;
}
A(int x1,int x2)
{
a1=x1;
a2=x2;
}
void printA()
{
cout<<"A1::::"<<a1<<"a2::::"<<a2<<endl;
}
};
class B:public A
{
int b1,b2;
public:
B()
{
b1=b2=0;
}
B(int x1,int x2,int y1,int y2):A(y1,y2)
{
b1=x1;
b2=x2;
}
void printB()
{
cout<<"B1::::"<<b1<<"b2::::"<<b2<<endl;
}
};
int main()
{
clrscr();
int x1,x2,y1,y2;
cout<<"input x1 x2 y1 y2"<<endl;
cin>>x1>>x2>>y1>>y2;
B objB(x1,x2,y1,y2);
objB.printA();
objB.printB();
getch();
return 0;
}