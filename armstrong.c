#include <stdio.h>
#include <math.h>
int armstrong(int);
int main()
{
    int a,b;
    scanf("%d\n",&a);
    scanf("%d",&b);
    int count=0;
    for(int i=a;i<=b;i++)
    {
        if(armstrong(i)==1){
            printf("%d ",i);
             count++;
    }
    }
    printf("\n");
    printf("%d",count);
    return 0;
}

int armstrong(int n)
{
  int temp=n;
  int temp1=n;
  int sum=0;
  int cube;
  int i;
  for(i=0;temp1!=0;i++,temp1/=10){}
  while(temp!=0)
    {
      int d=temp%10;
      cube=pow(d,i);
      sum+=cube;
     temp/=10;   
    }
  if(sum==n)
  return 1;
      else
  return 0;
}
