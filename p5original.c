#include<stdio.h>
int input()
{
  int a,b,c;
printf("Enter the numbers\n");
scanf("%d,%d,%d",&a,&b,&c);
return a;
return b;
return c;
}

int compare(int a,int b,int c)
{
int d;
if(a>=b)
{
  if(a>=c)
  {
    d=a;
  }
}

else if(b>=c)
  {
    
     d=b;

  }

else if(c>=b)
{
    d=c;
    
}
return d;
}

int output(int d)
{
  printf("The largest number is %d",d);
}

int main()
{
  int d;
  int a=input();
  int b=input();
  int c=input();
  d=compare(a,b,c);
  output(d);
  return 0;
}