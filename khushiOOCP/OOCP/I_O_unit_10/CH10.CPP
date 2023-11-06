//ch 10 ex=10.3

#include<iostream.h>
#include<conio.h>
#include<string.h>

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
	getch();
	return 0;
}