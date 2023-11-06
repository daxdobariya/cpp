#include<iostream.h>
#include<conio.h>
class Student
{
	protected:
	int roll;
	public:
	void get(int a)
	{
	roll=a;
	}
	void putr(void)
	{
	cout<<"Roll no::"<<roll<<endl;
	}
};
class Test:public Student
{
	protected:
	int part1,part2;
	public:
	void gett(int x,int y)
	{
	part1=x;
	part2=y;
	}
	void putm(void)
	{
	cout<<"part1"<<part1<<endl<<"part2"<<part2<<endl;
	}
};
class Sports
{
protected:
int score;
public:
void gets(int s)
{
score=s;
}
void puts(void)
{
cout<<"Sports"<<score<<endl;
}
};

class Result:public Test,public sports
{
int total;
public:
void display(void)
{
total=part1+part2+score;
putr();
putm();
puts();
cout<<"total"<<total;
}
};
int main()
{
clrscr();
Result r1;
r1.get(1234);
r1.gett(12,12);
r1.gets(12);
r1.display();
getch();
return 0;

}