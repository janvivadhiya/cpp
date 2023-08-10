#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	cout<<"enter a ::";
	cin>>a;
	cout<<"enter b ::";
	cin>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<" a is ::"<<a<<endl;
	cout<<" b is ::"<<b<<endl;


	getch();

}