#include<iostream.h>
#include<conio.h>
class Vector
{
	int x,y,z;
	public:
	Vector()
	{
	x=y=z=0;
	}
	Vector(int a)
	{
	x=y=z=a;
	}
	Vector(int a, int b,int c)
	{
	x=a;y=b;z=c;
	}
	void print()
	{
		cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	}
	Vector add(Vector v3)
	{
	Vector ans;

	ans.x=x+v3.x;
	ans.y=y+v3.y;
	ans.z=z+v3.z;
	return ans;
	}
};
int main()
{
clrscr();
Vector v1;
v1.print();
Vector v2(11);
v2.print();
Vector v3(10,20,30);
v3.print();
v1=v2.add(v3);
v3.print();
getch();
return 0;
}
