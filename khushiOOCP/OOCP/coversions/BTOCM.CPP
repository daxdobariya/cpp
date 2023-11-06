#include<iostream.h>
#include<conio.h>
class Length
{
long int k,m,s;
public:
Length()
{
 k=m=s=0;
}
Length(long int sem)
{
k=sem/100000;
sem=sem%100000;
m=sem/100;
s=sem%100;
}
void print()
{
cout<<k<<":"<<m<<":"<<s<<endl;
}
};
int main()
{
clrscr();
Length l1;
l1.print();
long int sem;
cout<<"Input ";
cin>>sem;
Length l2(sem);
l2.print();
getch();
return 0;
}