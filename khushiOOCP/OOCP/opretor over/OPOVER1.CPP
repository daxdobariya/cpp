#include<iostream.h>
#include<conio.h>
class Vector
{ int x,y,z;
  public:
  Vector()
  {
  x=y=z=0;
  }
  Vector(int a)
  {
	       x=y=z=a;
  }
  Vector(int a,int b,int c)
  {
  x=a;
  y=b;
  z=c;
  }
  // unery operater overload
	void operator -()
	{
	x=-x;
	y=-y;
	z=-z;
	}
  //binary o v
	 Vector operator -(Vector v)
	{
	Vector ans;
	ans.x=x-v.x;
	ans.y=y-v.y;
	ans.z=z-v.z;

	return ans;
	}
  void print()
  {
  cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
  }
};
int main()
{
clrscr();
Vector v1;
v1.print();
Vector v2(10);
v2.print();
Vector v3(10,20,30);
v3.print();
v1=v2-v3;
v1.print();
-v1;
v1.print();
getch();
return 0;
}