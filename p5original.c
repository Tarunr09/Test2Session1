#include<stdio.h>
#include<math.h>
int input_array_size(){
    int n;
    printf("Enter the Number of elements to be checked\n");
    scanf("%d",&n);
    return n;
}

void erotosthenes_sieve(int n, int a[n]){
    for(int i=2;i<=sqrt(n);i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j+=i){
                a[j]=1;
            }
        }
    }
}
void output(int n, int a[n]){
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            printf("%d\n",i);
        }
    }
}
int main(){
    int n;
    n=input_array_size();
    int a[101]={0};
    
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}




/*#include<stdio.h>
#include<math.h>

int input_array_size()
{
  int n;
  printf("Enter the array size:");
  scanf(%d,&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
  a[1]=0;
}

void erotosthenes_sieve(int n, int a[n])
{
  int i=0;
  while(i<sqrt(n)){
    while(a[i]==0)i++
        for(int k=i+i;i<n;k+=i)
      a[k]=0;
    i++
  }
}
void output(int n, int a[n])
{
  printf("the prime numbers between &d is \n %d",n,a[n]);
}

int main()
int n,a[n];
n=input_array_size()
*/