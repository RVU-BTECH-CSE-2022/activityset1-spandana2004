#include<stdio.h>
#include<stdlib.h>
//void input_two_string(char *,char *);
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
  for (int i=0;i='\0';i++)
    {
      if((a[i]>b[i])&&(a[i]&&b[i]>0))
      {
        result=1;
        break;
      }
      else 
      {
        result=0;
        break;
      }
    }
  return result;
}
void output(char a[],char  b[],int result)
{
  if(result==1)
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
