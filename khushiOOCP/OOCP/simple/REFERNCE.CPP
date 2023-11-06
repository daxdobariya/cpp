//refernce var...
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a=10;
int &b=a;
cout<<"A:::::"<<a<<endl;
cout<<"B::::::"<<b<<endl;
b=b+10;
cout<<"A:::::"<<a<<endl;
cout<<"B::::::"<<b<<endl;
a=a*10;
cout<<"A:::::"<<a<<endl;
cout<<"B::::::"<<b<<endl;
getch();
return 0;
}