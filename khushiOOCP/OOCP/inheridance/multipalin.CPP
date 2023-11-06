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

class Test
{
	protected:
	int mrk1,mrk2;

	public:
	Test()
	{
		mrk1 = mrk2 = 0;
	}
	Test(int t_mrk1,int t_mrk2)
	{
		mrk1 = t_mrk1;
		mrk2 = t_mrk2;
	}
	void printT()
	{
		cout<<"Marks 1 "<<mrk1<<" Marks 2 "<<mrk2<<endl;
	}

};

class Result:public Student,public Test
{
	int total;
	public:
	Result()
	{
		total = 0;
	}
	Result(int t_rNo,int t_mrk1,int t_mrk2):Student(t_rNo),Test(t_mrk1,t_mrk2)
	{
		total = mrk1 + mrk2;
	}
	void printR()
	{
		printS();
		printT();
		cout<<"Total:::"<<total<<endl;
	}

};

int main()
{
	clrscr();

	Result r1(1,10,20);
	r1.printR();



	getch();
	return 0;

}












