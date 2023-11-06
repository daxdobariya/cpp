//Basic to Class
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
	Time(int sec)
	{
	h=sec/3600;
	sec=sec%3600;
	m=sec/60;
	s=sec%60;
	}
	void print()
	{
	cout<<h<<":"<<m<<":"<<s<<endl;
	}
};
int main()
{
clrscr();
Time t1;
t1.print();
int sec;
cout<<"Input Seconds::";
cin>>sec;
Time t2(sec);
t2.print();
getch();
return 0;
}