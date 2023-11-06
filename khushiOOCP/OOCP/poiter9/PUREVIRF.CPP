#include<iostream.h>
#include<conio.h>
class Base
{
public:
virtual void fun1()
{
cout<<"B fun1::";
}
virtual void fun2()=0;

};
class Derived:public Base
{
 public:
virtual void fun1()
{
cout<<"D fun1::";
}
virtual void fun2()
{
cout<<"D fun2::";
}

};
int main()
{
clrscr();
Base *bptr;
Derived d;
bptr->fun1();
bptr=&d;
bptr->fun1();
getch();
return 0;
}