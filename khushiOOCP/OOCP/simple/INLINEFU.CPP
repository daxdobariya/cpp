//inline function
#include<iostream.h>
#include<conio.h>
inline int cube(int a)
{
return a*a*a;
}
int main()
{
clrscr();
int cb=cube(2);
cout<<"Cube"<<cb;
getch();
return 0;
}