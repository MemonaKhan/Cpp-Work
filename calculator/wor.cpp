/*#include<iostream>
#include<conio.h>
using namespace std;
struct Teacher
{
	char name[15];
	int phone;
	float sal;
	char desig[10];
	char add[10];
}; 

Teacher getdata(Teacher t)
{
	cout<<"Enter data for Teacher 2: \n";
	cout<<"Enter Teacher's Name: ";
	cin.get(t.name,15);
	fflush(stdin);
	cout<<"Enter Teacher's Address: ";
	cin.get(t.add,10);
	fflush(stdin);
	cout<<"Enter Teacher's Designation: ";
	cin.get(t.desig,10);
	fflush(stdin);
	cout<<"Enter Teacher's Phone no: ";
	cin>>t.phone;
	fflush(stdin);
	cout<<"Enter Teacher's Salary: ";
	cin>>t.sal;
	fflush(stdin);
	return t;
}
void teacherdata(void)
{
	Teacher t1, t2;
	cout<<"Enter data for Teacher 1: \n";
	cout<<"Enter Teacher's Name: ";
	cin.get(t1.name,15);
	fflush(stdin);
	cout<<"Enter Teacher's Address: ";
	cin.get(t1.add,10);
	fflush(stdin);
	cout<<"Enter Teacher's Designation: ";
	cin.get(t1.desig,10);
	fflush(stdin);
	cout<<"Enter Teacher's Phone no: ";
	cin>>t1.phone;
	fflush(stdin);
	cout<<"Enter Teacher's Salary: ";
	cin>>t1.sal;
	fflush(stdin);
	t2=getdata(t1);
	cout<<"----------------------------------------------------------------------\nTeacher details are\n";
	cout<<"S.no:\tNAME\tDESIGATION\tPHONE NO:\tSALARY\tADDRESS\n";
	cout<<"1."<<"\t"<<t1.name<<"\t"<<t1.desig<<"\t\t"<<t1.phone<<"\t"<<t1.sal<<"\t"<<t1.add<<endl;
	cout<<"2."<<"\t"<<t2.name<<"\t"<<t2.desig<<"\t\t"<<t2.phone<<"\t"<<t2.sal<<"\t"<<t2.add<<endl;
	getche();
}
#include<iostream>
#include<conio.h>
using namespace std;
struct Teacher
{
	char name[15];
	int phone;
	float sal;
	char desig[10];
	char add[10];
}; 

Teacher data(Teacher t)
{
	cout<<"Enter data for Teacher 2: \n";
	cout<<"Enter Teacher's Name: ";
	cin.get(t.name,15);
	fflush(stdin);
	cout<<"Enter Teacher's Address: ";
	cin.get(t.add,10);
	fflush(stdin);
	cout<<"Enter Teacher's Designation: ";
	cin.get(t.desig,10);
	fflush(stdin);
	cout<<"Enter Teacher's Phone no: ";
	cin>>t.phone;
	fflush(stdin);
	cout<<"Enter Teacher's Salary: ";
	cin>>t.sal;
	fflush(stdin);
	return t;
}
void teacheroutput(void)
{
	Teacher t1, t2;
	cout<<"Enter data for Teacher 1: \n";
	cout<<"Enter Teacher's Name: ";
	cin.get(t1.name,15);
	fflush(stdin);
	cout<<"Enter Teacher's Address: ";
	cin.get(t1.add,10);
	fflush(stdin);
	cout<<"Enter Teacher's Designation: ";
	cin.get(t1.desig,10);
	fflush(stdin);
	cout<<"Enter Teacher's Phone no: ";
	cin>>t1.phone;
	fflush(stdin);
	cout<<"Enter Teacher's Salary: ";
	cin>>t1.sal;
	fflush(stdin);
	t2=data(t1);
	cout<<"Teacher 1 details are\nTeacher's name is "<<t1.name<<"\nTeacher's Address is "<<t1.add<<"\nTeacher's Designation is "<<t1.desig<<"\nTeacher's Phone no: is "<<t1.phone<<"\nTeacher's Salary is "<<t1.sal<<endl;
	cout<<"Teacher 2 details are\nTeacher's name is "<<t2.name<<"\nTeacher's Address is "<<t2.add<<"\nTeacher's Designation is "<<t2.desig<<"\nTeacher's Phone no: is "<<t2.phone<<"\nTeacher's Salary is "<<t2.sal<<endl;
	getche();
}
#include<conio.h>
using namespace std;
void main(void)
{
	int a[10];
	char c[10];
	int as=0; float md=1.0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		cin>>c[i];
		while(c[i]!='=')
		{
			switch(c[i])
			{
			case '+':
				{
					as=as+a[i];
					cout<<as;
				}
				break;
			case '-':
				{
					as=as-a[i];
					cout<<as;
				}
				break;
			case '*':
				{
					md=md*a[i];
					cout<<md;
				}
				break;
			case '/':
				{
					md=md/a[i];
					cout<<md;
				}
				break;
			}
		}
		
}
#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
struct Room
{
	Distance length;
	Distance width;
};
void room(void)
{
	Room Dinning;
	Room Class;

	Dinning.length.feet=12;
	Dinning.length.inches=45.5;
	Dinning.width.feet=9;
	Dinning.width.inches=20.6;
	float l= Dinning.length.feet+Dinning.length.inches/12;
	float w= Dinning.width.feet+Dinning.width.inches/12;
	float area = l*w;
	cout<<"Dinning oom details are:\nLength = "<<l<<"\nWidth = "<<w<<endl;
	cout<<"Area of Dinning Room is "<<area<<endl;
	getch();
}
*/