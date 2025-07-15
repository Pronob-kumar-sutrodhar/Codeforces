#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int a, b, sum = 0, high = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        sum = sum - a + b;
        if (sum > high)
            high = sum; 
    }
    printf("%d\n", high);
    return 0;
}
