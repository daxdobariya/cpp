#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<iomanip.h>
int main()
{
clrscr();
char *str="khushi";
int i;
int len=strlen(str);
for(i=1;i<=len;i++)
{
cout.write(str,i);
cout<<endl;
}
getch();
for(i=len-1;i>=1;i--)
{
cout.write(str,i);
cout<<endl;
}
getch();
//prefision
clrscr();
cout.precision(3);
cout<<sqrt(2)<<endl;
getch();
cout<<1.13456<<endl;
getch();
cout<<9.00000<<endl;
getch();
cout<<9.30000<<endl;

cout.width(10);
cout.fill('*');
cout<<12345<<endl;
clrscr();
for(i=1;i<=5;i++)
{
//cout.fill(' ');
//cout.width(6);
cout<<setfill('<');
cout<<setw(6);
cout<<i;
cout.width(15);
cout<<sqrt(i);
cout<<endl;
}
getch();
clrscr();
cout.setf(ios::hex,ios::basefield);
cout<<63<<endl;
cout.setf(ios::oct,ios::basefield);
cout<<63<<endl;

getch();
return 0;
}