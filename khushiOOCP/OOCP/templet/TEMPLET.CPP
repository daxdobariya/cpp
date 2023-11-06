#include<iostream.h>
#include<conio.h>

template <class T1,class T2>
class Demo
{
T1 a;
T2 b[20];
public:
void getData()
{
cout<<"Input A::::";cin>>a;
cout<<"Input B::::";cin>>b;
}
void print()
{
cout<<"A::::"<<a<<endl;
cout<<"B::::"<<b<<endl;
}
};
int main()
{
clrscr();
Demo<int,char> d1;
d1.getData();
d1.print();
getch();
return 0;
}