#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int a, b, room = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (b - a >= 2) {
            room++;
        }
    }
    printf("%d\n", room);
    return 0;
}
