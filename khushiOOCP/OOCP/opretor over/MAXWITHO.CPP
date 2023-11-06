#include<iostream.h>
#include<conio.h>
class A
{
 int a;
 public:
 A()
 {
 a=0;
 }
 void setA(int x)
 {
	a=x;
 }
 int getA()
 {
  return a;
 }
 };
 class B
{
 int b;
 public:
 B()
 {
 b=0;
 }
 void setB(int x)
 {
	b=x;
 }
 int getB()
 {
  return b;
 }
 void max(A obj)
 {
	if(b>obj.getA())
	{
		cout<<"b greter"<<b<<endl;
	}
	else {
		cout<<"a greter"<<obj.getA()<<endl;
	}
 }
};
int main()
{
int c;
clrscr();
A obj1;
obj1.setA(30);
B obj2;
obj2.setB(50);
obj2.max(obj1);
getch();
return 0;
}