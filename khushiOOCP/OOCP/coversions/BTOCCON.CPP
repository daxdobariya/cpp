#include<iostream.h>
#include<conio.h>
class Chalan
{
int r,p;
public:
Chalan()
{
r=p=0;
}
Chalan(int ipai)
{
r=ipai/100;
p=ipai%100;
}
void print()
{
cout<<"Roupee::::"<<r<<"."<<p<<endl;
}
};
int main()
{
clrscr();
Chalan c1;
c1.print();
int ipai   ;
cout<<"input";
cin>>ipai;
Chalan c2(ipai);
c2.print();
getch();
return 0;
}