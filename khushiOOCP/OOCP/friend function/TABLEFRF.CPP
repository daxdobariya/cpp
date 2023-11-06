#include<iostream.h>
#include<conio.h>
class DataChor;
class Table
{
 int no,limit;
 public:
 Table()
 {
   no=1;
   limit=10;
 }
 void setData()
 {
 cout<<"input number and limit"<<endl;
 cin>>no>>limit;
 }
 void print()
 {
 cout <<"number is"<<no<<endl;
 cout<<"limit is"<<limit<<endl;
 }

friend void tableData(Table,DataChor &);
};
class DataChor{
   int n,l;
   public:
   DataChor()
   {
   n=0;
   l=0;
   }
   friend void tableData(Table,DataChor &);
   void printData()
{
for(int i=1;i<=l;i++)
{
cout<<n<<"*"<<i<<"="<<l<<endl;
}
}
void printTable()
{
cout<<"Number:::"<<n<<endl;
cout<<"limit:::"<<l<<endl;
}

};
void tableData(Table t1,DataChor &dc)
{
dc.n=t1.no;
dc.l=t1.limit;
}
int main()
{
clrscr();
Table t1;
t1.setData();
t1.print();
DataChor dc;
cout<<"defult be call friend fuction"<<endl;
dc.printData();
tableData(t1,dc);//ff call
dc.printData();
dc.printTable();
getch();
return 0;
}