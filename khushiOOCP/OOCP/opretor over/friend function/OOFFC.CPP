#include<iostream.h>
#include<conio.h>
#include<string.h>
class Arr
{	char str[20];
public:
Arr()
{
strcpy(str ,NULL);
}
void print()
{
cout<<"String:::::"<<str<<endl;
}
void getData()
{
cout<<"Input a string:::";
cin>>str;
}
friend Arr operator +(Arr,Arr);
};
Arr operator +(Arr a1,Arr a2)
{
Arr a3;
strcpy(a3.str,a1.str);
strcat(a3.str,a2.str);
//strcpy(a3.str,a2.str);
return a3;
}
int main()
{
clrscr();
Arr a1,a2;
a1.getData();
//a1.print();
a2.getData();
//a2.print();
Arr a3;
a3=a1+a2;
a3.print();
getch();
return 0;
}