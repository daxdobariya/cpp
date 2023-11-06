//static scope user
#include<iostream.h>
#include<conio.h>
class A
{
static int cnt;
public:
void inc()
{
cnt ++;
}
void print()
{
cout<<"Count ::::"<<cnt<<endl;
}
};
int A::cnt;
int main()
{
clrscr();
A obj1,obj2,obj3,obj5;
obj1.inc();
obj2.inc();
obj3.print();
A obj4;
obj2.inc();
obj5.print();
getch();
return 0;
}