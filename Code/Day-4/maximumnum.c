#include<stdio.h>
#include<conio.h>
void main()
{
int num[10],i,max=0,n;
clrscr();
printf("How many elements\n");
scanf("%d",&num[i]);
printf("enter %d elements\n",n);
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
if(num[i]>max)
{
max=num[i];
}
}
printf("maximum=%d",max);
getch();
}
