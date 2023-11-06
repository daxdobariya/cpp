#include<iostream.h>
#include<conio.h>
class Demo;
class Sample
{
  double a,b,c;
  public:
  Sample()
  {
  a=0.0;
  b=0.0;
  c=0.0;
  }
  void setData()
  {
  cout<<"Input a,b,c"<<endl;
  cin>>a>>b>>c;
  }
  void print()
  {
  cout<<"a:::"<<a<<endl<<"b:::"<<b<<endl<<"c:::"<<c<<endl;
  }
  friend void mean(Sample,Demo &);
  };
class Demo
{
   double x,y,z;
   double avg;
   public:
   friend void mean(Sample,Demo &);
   Demo()
   {
   x=y=z=avg=0.0;

   }
   void printDemo()
{
cout<<"x:::"<<x<<endl<<"y:::"<<y<<endl<<"z:::"<<z<<endl<<"avg"<<avg<<endl;
}
};
void mean(Sample s,Demo &o)
{
 double mn;
 o.x=s.a;
 o.y=s.b;
 o.z=s.c;
mn=(s.a +s.b +s.c)/3;
o.avg=mn;
cout<<"the mean of input data is"<<mn<<endl;
}
int main()
{
clrscr();
Sample s1;
s1.setData();
s1.print();
Demo d1;
cout<<"befor frind function"<<endl;
d1.printDemo();
mean(s1,d1);//friend function call
  cout<<"after frind function"<<endl;
d1.printDemo();
getch();
return 0;
}