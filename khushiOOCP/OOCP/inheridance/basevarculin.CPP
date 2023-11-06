#include<iostream.h>
#include<conio.h>

class Student
{
	int rNo;

	public:
	Student()
	{
		rNo = 0;
	}
	Student(int t_rNo)
	{
		rNo = t_rNo;
	}
	void printS()
	{

		cout<<"Student Roll no  "<<rNo<<endl;
	}
};

class Test: virtual public Student
{
	protected:
	int mrk1,mrk2;

	public:
	Test()
	{
		mrk1 = mrk2 = 0;
	}
	Test(int t_mrk1,int t_mrk2,int t_rNo):Student(t_rNo)
	{
		mrk1 = t_mrk1;
		mrk2 = t_mrk2;
	}
	void printT()
	{
		cout<<"Marks 1 "<<mrk1<<" Marks 2 "<<mrk2<<endl;
	}

};

class Sport:public virtual Student
{
	protected:
	int Scr;
	public:
	Sport()
	{
		Scr = 0;
	}
	Sport(int t_Scr,int t_rNo):Student(t_rNo)
	{
		Scr = t_Scr;
	}
	int getScr()
	{
		return Scr;
	}

	void printSp()
	{

		cout<<"Student Score "<<Scr<<endl;
	}
};

class Result:public Sport,public Test
{
	int total;

	public:
	Result()
	{
		total = 0;
	}
	Result(int t_rNo,int t_Scr,int t_mrk1,int t_mrk2):Sport(t_Scr,t_rNo),Test(t_mrk1,t_mrk2,t_rNo)
	{
		total = mrk1 + mrk2 + getScr();
	}
	void printR()
	{
		printS();
		printSp();
		printT();
		cout<<"Total:::"<<total<<endl;
	}

};


int main()
{
	clrscr();

	Result r1(1,10,10,20);
	r1.printR();



	getch();
	return 0;

}
























