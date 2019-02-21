# Set3
#include<stdio.h>
#include<conio.h>
void main()
{
char s[10],i;
printf("\nEnter a string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>'a')&&(s[i]<'z'))
{
printf("\nnot a numeric");
}
else
{
printf("%c\n",s[i]);
}
}
getch();
}
