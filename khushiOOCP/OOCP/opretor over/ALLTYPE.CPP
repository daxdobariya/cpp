#include<iostream.h>
#include<conio.h>
#include<string.h>
class Arr
{
 int a[10],b[10];
 char c[50];
 public:
 Arr()
 {
   int i;
   for(i=0;i<10;i++)
   {
	a[i]=b[i]=0;
   }
   strcpy(c,NULL);
 }
 Arr(int a[10],int b[10],char c[50])
	{        int i;
		for(i=0;i<10;i++)
		{
		a[i]=a[i];
		}
		for(i=0;i<10;i++)
		{
		b[i]=b[i];
		}
		strcpy(c,c);
	}
	void getData()
	{
	int i;
	cout<<"Enter firts"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Input";
		cin>>a[i];
	}
	cout<<"Enter second:::"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Input";
		cin>>b[i];
	}
	cout<<"enter string::";
	cin>>c;
	}
	Arr operator +(Arr a3)
	{	Arr ans;
	int i;
	       //	ans.a[i]=a[i]+a3.a[i];
		for(i=0;i<10;i++)
		{
			ans.a[i]=a[i]+a3.a[i];
		}
	       //	ans.b[i]=b[i]+a3.b[i];
		for(i=0;i<10;i++)
		{
			ans.b[i]=b[i]+a3.b[i];
		}
		 strcpy(ans.c,c);
			strcat(ans.c,"  ");
		 strcat(ans.c,a3.c);

		return ans;
	}
 void print()
 {
	int i;
	for(i=0;i<10;i++)
	{
	cout<<" "<<a[i];
	}
	cout<<endl;
	for(i=0;i<10;i++)
	{
	cout<<"  "<<b[i];
	}
	cout<<endl<<"string:::"<<c<<endl;
 }

};
int main()
{
int a[10],b[10];
char c[50];
clrscr();
Arr a1,a2,a3;
a1.getData();
a1.print();
//cout<<endl;
a2.getData();
//clrscr();
a2.print();
a3=a1+a2;
a3.print();
getch();
return 0;
}