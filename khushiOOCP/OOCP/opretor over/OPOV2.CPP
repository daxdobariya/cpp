//opretor overloading all type
//not a un oper beacuse char arr does not exits unery opreator
#include<iostream.h>
#include<conio.h>
#include<string.h>
class AType
{
	char str[30];
	int a,arr[10];
	double d;
	public:
	//defult
	AType()
	{   int i;
	strcpy(str,NULL);
	a=0;
	for(i=0;i<10;i++)
	{
		arr[i]=0;
	}
	d=0.0;
	}
	//peramiter
	AType(char str1[30],int a1,int arr1[10],double d1)
	{
		int i;
		strcpy(str,str1);
		a=a1;
		for(i=0;i<10;i++)
		{
		arr[i]=arr1[i];
		}
		d=d1;
	}
	AType operator +(AType obj3)
	{	AType ans;
		strcpy(ans.str,str);
		strcat(ans.str,"  ");
		strcat(ans.str,obj3.str);
		ans.a=a+obj3.a;
		for(int i=0;i<10;i++)
		{
			ans.arr[i]=arr[i]+obj3.arr[i];
		}
		ans.d=d+obj3.d;

		return ans;
	}
	void print()
	{  int i;
	cout<<"string:::"<<str<<endl;
	cout<<"interr"<<a<<endl;
       cout<<"interger arry"<<endl;
       for(i=0;i<10;i++)
       {
	cout<<arr[i]<<" ";
       }
	cout<<endl<<"double:::"<<d<<endl;
	}
};
int main()
{
clrscr();
AType obj1;
obj1.print();
int i,temp_arr[10];
int temp_a;
double temp_d;
char temp_str[30];
cout<<"Input String";cin>>temp_str;
cout<<"input iterger";cin>>temp_a;
for(i=0;i<10;i++)
{
cout<<"Input arry";cin>>temp_arr[i];
}
cout<<"Input Double";cin>>temp_d;
AType obj2(temp_str,temp_a,temp_arr,temp_d);
obj2.print();
cout<<"Input String";cin>>temp_str;
cout<<"input iterger";cin>>temp_a;
for(i=0;i<10;i++)
{
cout<<"Input arry";cin>>temp_arr[i];
}
cout<<"Input Double";cin>>temp_d;
AType obj3(temp_str,temp_a,temp_arr,temp_d);
obj1=obj2+obj3;
obj1.print();
getch();
return 0;
}