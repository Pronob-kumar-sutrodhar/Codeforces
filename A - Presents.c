#include <stdio.h>
int main() {
int n ;
scanf("%d", &n);
int p[n];
int g[n];
for(int i=0;i<n;i++)
{
    scanf("%d", &p[i]);
}
for(int i=0;i<n;i++){
    int rcv=p[i];
    g[rcv-1]=i+1;
}
for(int i=0;i<n;i++){
    printf("%d ",g[i]);
}
    return 0;
}
