#include <stdio.h>
int main()
{
  char x;
  int a,b;
  printf("enter a symbol:\n");
  scanf("%c",&x);
  printf("enter value of a:\n");
  scanf("%d",&a);
  printf("enter a value of b:\n");
  scanf("%d",&b);
  if(x=='+')
  {
    printf("sum of two numbers is:%d\n",a+b);
  }
  else if(x=='-')
  {
    printf("difference of two numbers is:%d",a-b);
  }
  else if(x=='*')
  {
    printf("multiplication of two numbers is:%d",a*b);
  }
  else
  {
    printf("division of two numbers is:%d",a/b);
  }
  return 0;
}
