#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  int X=0;
  char stmnt[5];
  for(int i=1;i<=n;i++)
  {
     scanf("%s", &stmnt);
  
  if(strstr(stmnt,"++X"))
  {
   ++X;
  }
  else if(strstr(stmnt,"--X"))
  {
   --X;
  }
   else if(strstr(stmnt,"X++"))
  {
   X++;
  }
   else if(strstr(stmnt,"X--"))
  {
   X--;
  }
}
   printf("%d",X);
 
    return 0;
}
