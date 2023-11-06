#include<iostream.h>
#include<conio.h>
class Matrix
{
	int mat [3][3];
	public:
	Matrix()
	{       int j;
		for(int i=0;i<3;i++)
		{
		for(
		j=0;j<3;j++)
		{
			mat[i][j]=0;
		}
		}
	}
	void print()
	{
		int j;
			for(int i=0;i<3;i++)
		{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
		       cout<<"\t"<<mat[i][j];
		}
		}
	}

	Metrix operator +(Metrix m2)
	{

	}
};
int main()
{
clrscr();
Matrix m1;
m1.print();
getch();
return 0;
}