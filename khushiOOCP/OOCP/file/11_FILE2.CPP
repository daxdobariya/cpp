#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
clrscr();
ofstream outf1("contery.txt");
ofstream outf2("state.txt");
char str_c[20],str_s[20];
cout<<"Contory::"<<endl;
cin>>str_c;
outf1<<str_c;
cout<<"State::"<<endl;
cin>>str_s;
outf2<<str_s;
outf1.close();
outf2.close();
ifstream inf1("contery.txt");
ifstream inf2("state.txt");
inf1>>str_c;
cout<<str_c<<endl;
inf2>>str_s;
cout<<str_s<<endl;
getch();
return 0;
}