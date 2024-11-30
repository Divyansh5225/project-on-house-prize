#include<stdio.h>
#include<conio.h>
int main()
{
	//	clrscr();
	int a,b,c;

printf("enter the number before swapping");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swapping the number will be=%d%d",a,b);
getch();
return 0;
}

