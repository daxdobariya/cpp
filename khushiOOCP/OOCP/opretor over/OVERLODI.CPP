//unary opretor without friend function
#include<iostream.h>
#include<conio.h>
class Vector
{
	int x,y,z,w;
	public:
	Vector()
	{
	x=y=z=w=0;
	}
	Vector(int a ,int b,int c,int d)
	{
	x=a;
	y=b;
	z=c;
	w=d;
	}
	void print()
	{
		cout<<"("<<x<<","<<y<<","<<z<<","<<w<<")"<<endl;
	}
	// unery operater overload
	operator -()
	{
	x=-x;
	y=-y;
	z=-z;
	w=-w;
	}

//binary o v
	 Vector operator +(Vector v3)
	{
	Vector ans;
	ans.x=x+v3.x;
	ans.y=y+v3.y;
	ans.z=z+v3.z;
	ans.w=w+v3.w;
	return ans;
	}

};
int main()
{
clrscr();
Vector v1;
v1.print();
Vector v2(10,20,30,40);
v2.print();
-v2;
//-v2;
v2.print();
Vector v3(1,2,3,4);
v3.print();
v1=v2+v3;//opreator oberload call
v1.print();
getch();
return 0;

}