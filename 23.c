# Set3
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,temp,n;
printf("\nenter limit");
scanf("%d",&n);
printf("\nenter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
if(temp>a[i])
{
temp=a[i];
}
}
printf("%d",temp);
getch();
}
