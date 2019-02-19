# Set3
#include<stdio.h>
#include<conio.h>
void main()
{
int n,d,m,t,i,sum=0;
printf("\nEnter the first number:");
printf("\nEnter the difference:");
printf("\nEnter the number of terms:");
scanf("%d",&n);
scanf("%d",&d);
scanf("%d",&m);
for(i=1;i<m;i++)
{
t=n+(m-1)*d;
sum=sum+t;
}
printf("%d",sum);
getch();
}
