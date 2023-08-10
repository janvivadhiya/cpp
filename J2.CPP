#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,count;
	clrscr();
	count=1;

		for(i=101;i<200;i++)
		{
		if(i%7==0)
		{
		//printf(%d/n;i);

		count++;
		}
	}
	printf("\n the number of digits divisible by 7 between 100 and 200 are::%d",count);

	printf("\n Enter the number::");
	scanf("\n %d \n",&n);

	if(n>100 && n<200)
	{
		if(n%7==0)
		{
			printf("this number is divided by 7");
							}
		else

	 {

		printf("this number is not divisible by 7");

		}

		}
	   tch();
}

