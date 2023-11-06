#include<iostream.h>
#include<conio.h>
#include<string.h>
class Dumy;
class Uidai
{   int id;
    char nm[10];
    int age;
  public:
  Uidai(){
  id=0;
  strcpy(nm,NULL);
  age=0;
  }
  void setData()
  {
  cout<<"Input id , name ,age"<<endl;
  cin>>id>>nm>>age;
  }
  void print()
  {
  cout<<"id::::"<<id<<endl<<"name:::"<<nm<<endl<<"age"<<age<<endl;
  }
   friend void m(Uidai,Dumy &);
};
class Dumy
{
	  int idn;
	  char name[10];
	  int a;
	  public:
  friend void m(Uidai,Dumy &);
  Dumy()
  {
	idn=0;
	strcpy(name,NULL);
	a=0;
  }


  void printDumy()
  {
	cout<<"id:::"<<idn<<endl<<"name"<<name<<endl<<"age"<<a<<endl;
  }
  };
  void m(Uidai u,Dumy &d)
{

int idn;
char name[10];
int a;
 d.idn=u.id;
 d.name=u.nm;
 d.a=u.age;

cout<<"data is"<<idn<<name<<a<<endl;
}


int main()
{
clrscr();
Uidai u1;
u1.setData();
u1.print();
Dumy d1;
cout<<"befor frind function"<<endl;
d1.printDumy();
m(u1,d1);//friend function call
  cout<<"after frind function"<<endl;
d1.printDumy();
getch();
return 0;
}