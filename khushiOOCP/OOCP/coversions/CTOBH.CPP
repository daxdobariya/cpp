#include<iostream.h>
#include<conio.h>
class Time
{
int h,m,s;
public:
Time()
{
h=m=s=0;
}

void print(){
cout<<"hour:::"<<h<<"min:::"<<m<<"sec:::"<<s<<endl;
}
void getTime()
{
cout<<"hour and min and sec";cin>>h>>m>>s;
}
operator int()              //casting operator
{
int sec;
sec=h*3600+m*60+s;
return sec;
}
};
int main()
{
clrscr();
Time t1;
t1.getTime();
int sec;
sec=t1;    //casting opartor
cout<<"second"<<sec<<endl;
//t1.print();
getch();
return 0;
}