#include<iostream.h>
#include<conio.h>
//function overloading
class A
{
int ans;
public:
A()
{
ans=0;
}
void add(int a,int b)
{
ans=a+b;
cout<<"ans is"<<ans<<endl;
}
void add(int a,int b,int c)
{
ans=a+b+c;
cout<<"ans is"<<ans<<endl;
}
void add(int a)
{
ans=a;
cout<<"ans is"<<ans<<endl;
}
void add(int a,int b,int c,int d)
{
ans=a+b+c+d;
cout<<"ans is"<<ans<<endl;
}

void add(double a)
{

cout<<"ans is"<<ans<<endl;
}


void print()
{
cout<<"ans is"<<ans<<endl;
}
};
int main()
{
clrscr();
A obj;
obj.add(2,3);
obj.add(5,5,5);
obj.add(5,8,9,1);

obj.add(4);
getch();
return 0;
}