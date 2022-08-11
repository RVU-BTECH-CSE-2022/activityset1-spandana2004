
#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the number:");
  scanf("%f",&n);
  return n;
}
float compute(float n)
{
  float s=5;
  for(int i=0;i<5;i++)
    {
  s=(s+(n/s))/2;
      }
  return s;
}
void output(float s,float n)
{
  printf("the square root of the number %f is:%f",n,s);
}
int main()
{
  float n;
  float s;
  n=input();
  s=compute(n);
  output(s,n);
  return 0;
}