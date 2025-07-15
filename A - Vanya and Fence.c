#include <stdio.h>
 
int main() {
    int n, h;
    scanf("%d %d", &n, &h);
    int he, width = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &he);
        if (he > h)
            width += 2;
        else
            width += 1;
    }
    printf("%d\n", width);
    return 0;
}
