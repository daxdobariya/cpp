//matrix opretor overloading
#include<iostream.h>
#include<conio.h>
class Matrix
{int mat[3][3];
public:
Martix()
{
int i,j;
//cout<<"\n"
for(int i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
       //	cout<<"\t"<<
	mat[i][j]=0;
	}
}
}
void getData()
{
int i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	cout<<"INput Matrix::"<<endl;
	cin>>mat[i][j];
	}
}

}
Matrix operator +(Matrix m2)
{           int i,j;
	Matrix m3;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
		}
	}
	return m3;
}
Matrix operator -(Matrix m2)
{           int i,j;
	Matrix m3;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    m3.mat[i][j]=mat[i][j]-m2.mat[i][j];
		}
	}
	return m3;
}

void print()
{

int i,j;

for(i=0;i<3;i++)
{        cout<<"\n";
	for(j=0;j<3;j++)
	{
	cout<<"\t"<<mat[i][j];
	}
}}

};
int main()
{
clrscr();
Matrix m1,m2,m3;
m1.getData();
m2.getData();
cout<<endl<<"first input::::"<<endl;
m1.print();
cout<<endl<<"second input:::"<<endl;
m2.print();
getch();
m3=m1+m2;
cout<<endl<<"Additon:::"<<endl;
m3.print();
getch();
cout<<endl<<"substrction:::"<<endl;
m3=m1-m2;
m3.print();
getch();
return 0;
}