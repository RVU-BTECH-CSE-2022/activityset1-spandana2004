#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
}
float compute(int n)
{
  float s;
  s=sqrt(n);
  return s;
}
void output(float s,int n)
{
  printf("the square root of the number %d is:%d",n,s);
}
int main()
{
  int n;
  float s;
  n=input();
  s=compute(n);
  output(s,n);
  return 0;
}