#include<stdio.h>
#include<stdlib.h>

void input_two_string(char a[],char b[])
{
      printf("enter string 1:");
      scanf("%s",a);
      printf("enter string 2:");
      scanf("%s",b);
}
int srtcmp(char a[],char b[])
{
  int result;
  for (int i=0;a[i]==b[i];i++)
    {
      /*if(a[i]==b[i])
      {
        result=0;
      }
      else*/ if (a[i]>b[i])
      {
        result=1;
      }
      else
      {
        result=2;
      }
    }
  return result;
}
void output(char a[],char  b[],int result)
{
  /*if(result==0)
  {
    printf("the strings are same");
  }
  else */if(result==1)
  {
    printf("%s is greater than %s",a,b);
  }
  else 
  {
    printf("%s is greater than %s",b,a);
  }
}
int main()
{
int result;
  char a[20],b[20];
  input_two_string(a,b);
  result=srtcmp(a,b);
  output(a,b,result);
}