// ch 10 ex 10.5 pg 297

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{
	clrscr();
	char *str="c++programming";
	int i;
	int len=strlen(str);
	for(i=1;i<=len;i++)
	{
		cout.write(str,i);
		cout<<endl;
	}
	getch();
	for(i=len-1;i>=1;i--)
	{
		cout.write(str,i);
		cout<<endl;
	}
	//precision
	clrscr();
	cout.precision(3);
	cout<<sqrt(2)<<endl;
	getch();
	cout<<1.1356<<endl;
	getch();
	cout<<9.000<<endl;
	cout<<endl;
	cout<<9.3000<<endl;
	cout<<endl;
	cout.width(30);
	cout<<12345<<endl;
	cout<<endl;
	getch();
	return 0;
}





