#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
class Inventory
{  char nm[20];
   int price;
   int code;
   public:
   Inventory()
   {
   strcpy(nm,NULL);
   price=0;
   code=0;
   }
   void header()
   {  cout<<setw(15)<<"Product Name";
   cout<<setw(15)<<"price";
   cout<<setw(15)<<"code"<<endl;

   }
   void getData()
   {
   cout<<"Iput name::";cin>>nm;
   cout<<"input price::";cin>>price;
   cout<<"Input code:::";cin>>code;
   }

   void print()
   {
   cout.setf(ios::internal,ios::adjustfield);
   cout<<setw(15)<<nm;
   cout<<setprecision(2);
   cout<<setw(15)<<price;
   cout<<setw(15)<<code<<endl;
   }


};
int main()
{clrscr();
Inventory obj[3];
fstream fobj;
fobj.open("file1.txt",ios::in|ios::out); //file mode
int i;
for(i=0;i<3;i++)
{
obj[i].getData();
}
obj[0].header();
fobj.seekp(0,ios::beg);//set pointer begning
//write to file
for(i=0;i<3;i++)
{
fobj.write((char *)&obj[i],sizeof(obj[i]));
}
//read to file
fobj.seekg(0,ios::beg);
for(i=0;i<3;i++)
{
fobj.read((char *)&obj[i],sizeof(obj[i]));
}
for(i=0;i<3;i++)
{
obj[i].print();
}
getch();
return 0;

}