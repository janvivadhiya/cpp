#include<iostream.h>
#include<conio.h>
long factorial(int);
void main()
{
	int counter,n;
	clrscr();
	cout<<"enter the number ::";
	cin>>n;
	cout<<"factorial value is ::"<<factorial(n);
	getch();
}
long factorial(int n)
{



	long fact=1;
	for(int counter=1;counter<=n;counter++)
	{
		fact=fact*counter;
	}
}
