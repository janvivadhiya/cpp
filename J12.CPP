#include<iostream.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	cout<<"enter three number ::";
	cin>>n1>>n2>>n3;
	if(n1>=n2 && n1>=n3)
	{
		cout<<"largest number ::"<<n1;
	}
	else if(n2>=n1 && n2>=n3)
	{
		cout<<"largest number ::"<<n2;
	}
	else
	{
		cout<<"largest number ::"<<n3;
	}
	getch();
}
