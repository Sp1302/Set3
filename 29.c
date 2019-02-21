# Set3
#include<stdio.h>
#include<conio.h>
int main()
{
int min,hr;
printf("\nenter the minute");
scanf("%d",&min);
hr=min/60;
min=min%60;
printf("%d\t%d\n",hr,min);
return 0;
}
