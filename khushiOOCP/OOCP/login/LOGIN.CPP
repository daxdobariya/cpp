#include<iostream.h>
#include<conio.h>
#include<string.h>
class Login
{       char urNm[10],psWrd[10];
	public:
	Login()
	{
	strcpy(urNm,"Khushi");
	strcpy(psWrd,"0404");
}
void input()
{
cout<<"Input username::";cin>>urNm;
cout<<"Input Password::";cin>>psWrd;
}
void print()
{
cout<<"Username::"<<urNm<<endl;
cout<<"Password::"<<psWrd<<endl;
}
void operator ==(Login obj2)
{
	int n,m;
	n = strcmp(urNm,obj2.urNm);
	cout<<"  "<<n<<endl;
	if(n == 0)
	{
		m = strcmp(psWrd,obj2.psWrd) ;
		if(m ==0)
		{
		cout<<"Login Suc..."<<endl;
		}
		else
		{
		cout<<"login failed"<<endl;
		}
	}
	else
	{
	cout <<"log in failed"<<endl;
	}
}
};
int main()
{
clrscr();
Login obj1,obj2;
//obj1.print();
obj2.input();
obj2.print();
obj1 == obj2;
getch();
return 0;
}