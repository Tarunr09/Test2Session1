#include<stdio.h>
int input()
{
  int n;
  printf("Enter value:");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
 
  int a=0,b=1,c=0;
  for(int i=2;i<=n-1;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
  return c;
}

void output(int n, int c)
{
  printf("Fibonacci for %d is %d",n,c);
}

int main()
{
  int n,fibo,c;
  n=input();
  c=find_fibo(n);
  output(n,c);
  return 0;
}