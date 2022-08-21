#include <stdio.h>
int input()
{
  int n;
  printf("enter the size of the array");
  scanf("%d",&n);
  return n;
}

int compute(int n,int arr[])
{
  int sum=0;
  
 
  for(int i=0;i<=n;i++)
    {
      printf("Enter the %d element of the array",i+1);
      scanf("%d",&arr[i]);
    }
  
  for(int i=0;i<=n;i++)
    {
      sum=sum+arr[i];
    }
  return sum;
  }
int output(int sum,int arr[])
{
  printf("The sum of the arrays %d",sum);
}
int main()
{
  int n;
  int sum;
  n=input();
  int arr[n];
  sum=compute(n,arr);
  output(sum,arr);
  return 0;
  }