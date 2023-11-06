#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
int age;
char name[20];
public:
person()
{
age=0;
strcpy(name,NULL);
}
void setData()
{
cout<<"Input age::"<<endl;cin>>age;
cout<<"Input name::"<<endl;cin>>name;
}
void print()
{
cout<<"age::"<<age<<"name::"<<name<<endl;
}
person greater(person p2)
{
person p3;
if(p2.age>age)
{
return p2;
}
else
{
return *this;
}
}
};
int main()
{
clrscr();
person p1,p2;
p1.setData(); p2.setData();
p1.print();   p2.print();
person p3;
p3=p1.greater(p2);
p3.print();
getch();
return 0;
}