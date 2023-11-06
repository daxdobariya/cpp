//class to class
#include<iostream.h>
#include<conio.h>
class Product
{
	int pid;
	int qty;
	int price;
	public:
	Product()
	{
	pid=qty=price=1;
	}
	void setqty(int q)
	{
	qty=q;
	}
	void setprice(int p)
	{
		price=p;
	}
	int getpid()
	{
		return pid;
	}
	int getqty()
	{
	return qty;
	}
	int getprice()
	{
	return price;
	}
	void print()
	{
	cout<<"product id::"<<pid<<endl<<"Qty::"<<qty<<endl<<"price::"<<price<<endl;
	}
};
class Bill
{
int itemid;
int total;
public:
Bill()
{
itemid=1;
total=0;
}
Bill(Product p)
{
	itemid=p.getpid();
	total=p.getqty()*p.getprice();
}
void print()
{
   cout<<"ttem id::"<<itemid<<endl<<"total::"<<total<<endl;
}
};
int main()
{
clrscr();
Product p1;
cout<<"Enter qty::"<<endl;
int q;
cin>>q;
cout<<"Enter price::"<<endl;
int p;
cin>>p;
p1.setqty(q);
p1.setprice(p);
p1.print();
Bill b1;
b1.print();
Bill b2(p1);
b2.print();
getch()  ;
return 0;
}