#include<iostream.h>
#include<conio.h>
//finction overloading with friend function
class Vector
{
	int x,y,z;
	public:
	Vector()
	{
	x=y=z=0;
	}
	void print()
	{
	cout<<"x:::"<<x<<
	endl<<"y:::"<<y<<endl<<"z:::"<<z<<endl;
	}
	void getData()
	{
	cout<<"Input number"<<endl;
	cin>>x>>y>>z;
	}
	friend Vector operator-(Vector );
	friend Vector operator-(Vector,Vector );
};
Vector operator -(Vector v)
{
v.x=-v.x;
v.y=-v.y;
v.z=-v.z;
return v;
}
Vector operator -(Vector v1,Vector v2)
{
Vector v3;
v3.x=v1.x-v2.x;
v3.y=v1.y-v2.y;
v3.z=v1.z-v2.z;
return v3;
}
int main()
{
clrscr();
Vector v1;
v1.print();
v1.getData();
Vector v2=-v1;
v2.print();
Vector v4,v5,v6;
v4.getData();
v5.getData();
v6=v4-v5;
v6.print();
getch();
return 0;
}