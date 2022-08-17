#include<stdio.h>
#include<math.h>
int input()
{
  int a;
  printf("enter the number:\n");
  scanf("%d",&a);
  return a;
}
int add(int a)
{
  int sum=0;
  for(int i=a;i>0;i--)
    {
  sum=sum+i;
      }
  return sum;
}
void output(int sum)
{
  printf("the sum is : %d",sum);
}
int main()
{
  int a,b,sum;
  a=input();
  sum=add(a);
  output(a,b,sum);
  return 0;
}