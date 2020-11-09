#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

void main(void)
{
	int a[10];
	int x,y;
	cout<<"Enter list: ";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			int m=a[i]-a[j];
			int n=a[i]-a[j+1];
			if(m<0)
				m=-m;
			if(n<0)
				n=-n;
			if(m<n)
			{
				x=a[i];
				y=a[j];
			}
			cout<<x<<" "<<y;
		}
	}
	//cout<<"\nNumbers are: "<<x<<y;
	getch();
}
