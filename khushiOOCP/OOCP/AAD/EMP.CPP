#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#define MAX 3
class Student
{
	private:
		int eid;
		char ename[25];
	public:
		void setEid(int id)
		{
			eid = id;
		}
		int getEid()
		{
			return eid;
		}
		void setEname(char en[25])
		{
			strcpy(ename,en);
		}
		char *getEname()
		{
			return ename;
		}
};
Student emp[MAX];
void input()
{
	int i;
	char n[25];


	for(int x = 0 ; x < MAX ; x++)
	{
		cout << "\n\t Enter Student id : ";
		cin >> i;
		emp[x].setEid(i);
		cout << "\n\t Enter Student name : ";
		cin >> n;
		emp[x].setEname(n);
	}

}
void print()
{
	for(int x = 0 ; x < MAX ; x++)
	{
		if (emp[x].getEid() != 0)
		{
			cout << "\n\n\t Student ID : " << emp[x].getEid();
			cout << "\n\t Stuent name : " << emp[x].getEname();
			delay(3000);
		}
	}
	cout << "\n\n\t Khatam..!!";
	getch();
}
void search()
{
	int idSearch;
	char isFound = 'F';
	cout << "\n\t Enter ID to search : ";
	cin >> idSearch;
	for(int x = 0 ; x < MAX ; x++)
	{
		if (idSearch == emp[x].getEid())
		{
			isFound = 'T';
			cout << "\n\t Student name : " << emp[x].getEname();
			delay(3000);
		}
	}
	if (isFound == 'F')
	{
		cout << "\n\t Not Found";
	}
	cout << "\n\n\t khatam..!!";
	getch();
}
void sort()
{
	Student temp;
	int x, y;
	for(x = 0 ;  x < MAX ; x++)
	{
		for(y = x + 1 ; y < MAX ; y++)
		{
			//if (emp[x].getEid() > emp[y].getEid())
			if (strcmp(emp[x].getEname(), emp[y].getEname()) > 0)
			{
				temp = emp[x];
				emp[x] = emp[y];
				emp[y] = temp;
			}
		}
	}
	cout << "\n\t Sorting khatam..!!";
	getch();
}
void deleteEmp()
{
	int idDelete;
	char isFound = 'F';
	cout << "\n\t Enter ID to delete : ";
	cin >> idDelete;
	for(int x = 0 ; x < MAX ; x++)
	{
		if (idDelete == emp[x].getEid())
		{
			isFound = 'T';
			emp[x].setEid(0);
			emp[x].setEname("");
		}
	}
	if (isFound == 'F')
	{
		cout << "\n\t Not Found";
	}
	else
		cout << "\n\n\t Deleted ho gya..!!";
	getch();
}

int main()
{
	int ch;
	do
	{
		clrscr();
		cout << "\n\t Main Menu";
		cout << "\n\t 1. Input Student";
		cout << "\n\t 2. Print Student";
		cout << "\n\t 3. Search Student By ID";
		cout << "\n\t 4. Sort Student";
		cout << "\n\t 5. Delete Student";
		cout << "\n\t 6. Exit";
		cout << "\n\t Enter your choice [1/2/3/4/5/6] : ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				input();
				break;
			case 2:
				print();
				break;
			case 3:
				search();
				break;
			case 4:
				sort();
				break;
			case 5:
				deleteEmp();
				break;
			case 6:
				break;
			default:
				cout << "\n\t Galat entry hai bhaaiya.!!";
				delay(2000);
				break;
		}
	}while(ch != 6);
	return 0;
}