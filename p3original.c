#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int prime=0;
  for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
      prime=1;
      break;
    }
  }
  return prime;
}
void output(int n, int is_prime)
{
  if(is_prime==1)
  {
    printf("%d is not a prime number",n);
  }
  else{
    printf("%d is a prime numer",n);
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
  return 0;
}