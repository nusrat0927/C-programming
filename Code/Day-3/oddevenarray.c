#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,i;
printf("enter the size of Array: ");
scanf("%d",&n);
printf("enter %d positive elements\n",n);
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
  }
  printf("\nEven numbers: ");
  for(i=0;i<n;i++)
  {
  if(arr[i]%2==0)
  {
  printf("%d",arr[i])
  }
  }
  printf("\nodd numbers: ");
  for(i=0;i<n;i++)
  {
  if(arr[i]%2!=0)
  {
  printf("%d",arr[i]);
  }
  }
  }
