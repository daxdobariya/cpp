#include<iostream.h>
#include<conio.h>
#include<string.h>
class Login
{       char urNm[10],psWrd[10];
	public:
	Login()
	{
	strcpy(urNm,"ABC");
	strcpy(psWrd,"123");
}
void input()
{cout<<"::::log in::::"<<endl;
cout<<"login username::";cin>>urNm;
cout<<"logpas Password::";cin>>psWrd;
}
void print()
{cout<<"Username::"<<urNm<<endl;
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
class Opretor:public Login
{

};
class Brand:public Login
{
	int brandid;
	char brandname[10];
	public:
	Brand()
	{
		brandid=0;
		strcpy(brandname,NULL);
	}
	void getData()
	{
		cout<<"Brand id:::";
		cin>>brandid;
		cout<<"BarndName:::";
		cin>>brandname;
	}
	void printb()
	{       cout<<"\n:::::::::Disply Barnd :::"<<endl;
		cout<<"Brand id:::"<<brandid<<endl;
		cout<<"Brand Name:::"<<brandname<<endl;
	}
};
class Mobile:public Brand
{
	char mn[10];
	int price;
	int ram;
	int rom;
	int storge;
	int ia;
	int wa;
	int sim;
	char color[10];
	public:
	Mobile()
	{
	strcpy(mn,NULL);
	price=0;
	ram=0;
	rom=0;
	storge=0;
	ia=0;
	wa=0;
	sim=0;
	strcpy(color,NULL);
	}
	void getDatam()
	{
	cout<<"Mobile name:::";cin>>mn;
	cout<<"Price:::";cin>>price;
	cout<<"RAm:::";cin>>ram;
	cout<<"rom:::";cin>>rom;
	cout<<"storge:::";cin>>storge;
	cout<<"ipAddress:::";cin>>ia;
	cout<<"Warranty:::";cin>>wa;
	cout<<"sim:::";cin>>sim;
	cout<<"color:::";cin>>color;
	}
	void printm()
	{  cout<<"\n::::::::::: Display Mobile ::::::"<<endl;
	cout<<"mobile name:::"<<mn<<endl;
	cout<<"price:::"<<price<<endl;
	cout<<"Ram:::"<<ram<<endl;
	cout<<"Rom:::"<<rom<<endl;
	cout<<"storge:::"<<storge<<endl;
	cout<<"ip address:::"<<ia<<endl;
	cout<<"waranty:::"<<wa<<endl;
	cout<<"sim ::::"<<sim<<endl;
	cout<<"color:::"<<color<<endl;
	}
};
class Customer
{
	char nm[10];
	char mon[10];
	char em[10];
	char add[10];
	public:
	Customer()
	{
		strcpy(nm,NULL);
		strcpy(mon,NULL);
		strcpy(em,NULL);
		strcpy(add,NULL);
	}
	void getDatac()
	{       cout<<"::::::::::::::::customer:::::::::"<<endl;
		cout<<"Enter your name:::";cin>>nm;
		cout<<"Enter your mobilenumber:::";cin>>mon;
		cout<<"Enter your email id::::";cin>>em;
		cout<<"Enetr your address:::";cin>>add;
	}
	void printc()
	{       cout<<":::::::::::::::Display Customer:::::::::::"<<endl;
		cout<<"your name:::"<<nm<<endl;
		cout<<"your mobile no:::"<<mon<<endl;
		cout<<"your email id:::"<<em<<endl;
		cout<<"your address:::"<<add<<endl;
	}
};
class Tax:public Customer,public Mobile
{
	public:
	Tax()
	{

	}
	void printt()
	{
		printb();
		printm();
		printc();
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
Brand brand1;
brand1.getData();
brand1.printb();
Mobile mob1;
mob1.getDatam();
mob1.printm();
Customer cus1;
cus1.getDatac();
cus1.printc();
getch();
return 0;
}