#include<stdio.h>
#include<conio.h>
int main()
{
int m1,m2,m3,m4,m5,perc;
printf("enter the marks of m1,m2,m3,m4,m5");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
perc=(m1+m2+m3+m4+m5)*100/500;
 if (perc>=60)
 {
 printf("First Division");
 }
 else
  { 
  if (perc>=50){
   printf("Second Division");
  }
  else{
  if(perc>=40){
  printf("Third Division");
  }
  else
  {
  printf("Fail\n");
  }
  }
  return 0;
  }
