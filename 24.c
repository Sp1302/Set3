# Set3
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
printf("\nenter limit");
scanf("%d",&n);
printf("\nenter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nsorted array");
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
