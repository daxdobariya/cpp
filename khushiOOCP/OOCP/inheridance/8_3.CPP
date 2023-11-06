#include<iostream.h>
#include<conio.h>
#include<string.h>
class Staff
{
int code;
char name[10];
public:
Staff()
{
code=0;
strcpy(name,NULL);
}
Staff(int c,char n[10])
{
code=c;
strcpy(name,n);
}
void prints()
{
cout<<"code::"<<code<<endl<<"name::"<<name<<endl;
}
};
class Teacher:public Staff
{
int subject;
char pub[10];

public:
Teacher()
{
subject=0;
strcpy(pub,NULL);
}
Teacher(int su,char p[10],int c,char n[10]):Staff(c,n)
{
subject=su;
strcpy(pub,p);
}
void printtt()
{      prints();
cout<<"subject::"<<subject<<endl<<"pub::" <<pub<<endl;
}
};
class Officer:public Staff
{
char grade;
public:
Officer()
{
grade='A';
}
Officer(char g,int c,char n[10]):Staff(c,n)
{
grade=g;
}
void printo()
{      prints();
cout<<"garde"<<grade<<endl;
}
};
class Typist:public Staff
{
int speed;
public:
Typist()
{
speed=0;
}
Typist(int s,int c,char n[10]):Staff(c,n)
{
speed=s;
}
void printt()
{        prints();
cout<<"speed::"<<speed<<endl;
}
};
class Casual:public Typist
{
long int dw;
public:
Casual()
{
dw=0;
}
Casual(long int d,int s ,int c,char n[10]):Typist(s,c,n)
{
dw=d;
}
void printc()
{
cout<<"daily::"<<dw<<endl;
}
};
class Regular:public Typist
{
public:
Regular()
{

}
Regular(int s,int c,char n[10]):Typist(s,c,n)
{

}
void printr()
{
printt();
}
};
int main()
{
clrscr();
Teacher t(1,"ABC",11,"KHUSHI");
Officer o('A',1,"khushi");
Casual c(123455,1,1,"oocp");
Regular r(10,1,"khushi");
r.printr();
cout<<endl;
c.printc();
cout<<endl;
o.printo();
cout<<endl;
t.printtt();
getch();
return 0;
}