# Set3
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n;
printf("\nenter the limit");
scanf("%d",&n);
printf("\nenter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nthe elements with index");
for(i=0;i<n;i++)
{
printf("%d\t%d\n",i,a[i]);
}
return 0;
}
