#include<iostream.h>
#include<conio.h>
#include<string.h>
class Inventory
{
int proid;
char proname[10];
int proqut;
int price;
long int totalprice;
char status;
  public:

   Inventory()
   {
	proid=NULL;
	strcpy(proname,NULL);
	proqut=NULL;
	price=NULL;
	totalprice=proqut*price;
	status='y';
   }
   Inventory(int a,char b[10],int c,int d,char e)
   {
	proid=a;
	strcpy(proname,b);
	proqut=c;
	price=d;
	totalprice=proqut*price;
	status=e;
   }
   Inventory(Inventory &i2)
   {
     proid=i2.proid;
     strcpy(proname,i2.proname);
     proqut=i2.proqut;
     price=i2.price;
     totalprice=proqut*price;
     status=i2.status;
   }
   void print()
   {
   cout<<"pro id"<<proid<<endl;
   cout<<"proname"<<proname<<endl;
   cout<<"proqut"<<proqut<<endl;
   cout<<"price"<<price<<endl;
   totalprice=proqut*price;
    cout<<"total"<<totalprice<<endl;
   cout<<"stusts"<<status<<endl;
   }
   void getData()
   {
   cout<<"Enter proid"<<endl;
   cin>>proid;
   cout<<"Enter proname"<<endl;
   cin>>proname;
   cout<<"Enter proqut"<<endl;
   cin>>proqut;
   cout<<"Enter price"<<endl;
   cin>>price;
   cout<<"Enter stuts"<<endl;
   cin>>status;
   }
};
int main()
{
clrscr();
Inventory i1,i2;
i2.getData();
cout<<"i1"<<endl;
i1.print();
cout<<"i2"<<endl;
i2.print();
Inventory i3(i2);
i3.print();
getch();
return 0;
}