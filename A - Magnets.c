#include <stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    char crnt[3], prvs[3];
    int groups = 1;
 
    scanf("%s", prvs);
 
    for (int i = 1; i < n; i++) {
        scanf("%s", crnt);
        if (crnt[0] != prvs[0]) {
            groups++;
        }
        prvs[0] = crnt[0];
    }
 
    printf("%d\n", groups);
    return 0;
}
