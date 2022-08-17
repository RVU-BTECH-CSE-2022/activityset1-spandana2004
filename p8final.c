#include<stdio.h>
void input(int *,int *);
void input(int *a,int *b)
{
  printf("enter the number:\n");
  scanf("%d",a);
  printf("enter the number:\n");
  scanf("%d",b);
}
int add(int *a,int *b)
{
  int sum;
  sum= a+b;
  return sum;
  
}
void output(int *a,int *b,int sum)
{
  printf("the sum of %d and %d is : %d",a,b,sum);
}
int main()
{
  int *a,*b,*sum;
  input(&a,&b);
  add(&a,&b);
  output(&a,&b,&sum);
  return 0;
}