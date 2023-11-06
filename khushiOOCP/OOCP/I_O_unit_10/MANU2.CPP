// unit 10 hexa and oct
//table 10.4

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<iomanip.h>
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

	cout.width(10);
	cout.fill('*');
	cout<<12345<<endl;
	for(i=0;i<=5;i++)
	{
	       //	cout.fill(' ');
	       //	cout.width(6);
	       cout<<setfill('<');
		cout<<i;
		cout.width(15);
		cout<<sqrt(i);
		cout<<endl;
	}

	getch();
	clrscr();
	cout.setf(ios::hex,ios::basefield);
	cout<<63<<endl;
	cout.setf(ios::oct,ios::basefield);
	cout<<63;endl;
	getch();
	return 0;
}




