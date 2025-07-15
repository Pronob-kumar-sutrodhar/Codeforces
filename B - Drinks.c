#include <stdio.h>
int main() {
int n ;
scanf("%d", &n);
int juice;
double volume=0;
for(int i=0;i<n;i++)
{
    scanf("%d", &juice);
    volume+=juice;
}
   printf("%.12lf\n", volume / (double)n);
    return 0;
}
