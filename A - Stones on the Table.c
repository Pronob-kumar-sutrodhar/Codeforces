#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n+1];
     scanf("%s", s);
 
   int count=0;
 
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
    
      
      
   }
  printf("%d",count);
    return 0;
}
