#include<stdio.h>
int input()
{
  int a;
printf("Enter the numbers");
scanf("%d",&a);
return a;
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

void output(d)
{
  printf("The largest is %d",d);
}

int main(void)
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=compare(a,b,c);
  output(d);
  return 0;
}