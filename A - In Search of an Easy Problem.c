#include <stdio.h>
 
int main() {
    int n,a;
    scanf("%d", &n);
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a);
    if(a) break;
   }
       if(a) printf("HARD\n");
    else printf("EASY\n");
    return 0;
}
