#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a,b,c;
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    scanf("%d%d%d",&a,&b,&c);
    if((a==1 && b==1) || (c==1&& b==1) ||(a==1 &&c==1))
  {
      sum+=1;
  }
  }
   printf("%d",sum);
 
    return 0;
}
