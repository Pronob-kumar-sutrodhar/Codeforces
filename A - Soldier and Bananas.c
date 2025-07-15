#include <stdio.h>
 
int main() {
    int k,n,w;
 
    scanf("%d%d%d", &k,&n,&w);
    int tc = k * w * (w + 1) / 2;
    int borrow = tc - n;
 
    if (borrow < 0) borrow = 0;
 
    printf("%d\n", borrow);
    return 0;
}
