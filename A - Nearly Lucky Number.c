#include <stdio.h>
 
int main() {
    long long int n;
    scanf("%lld", &n);
 
    int count = 0;
 
    if (n == 0) {
        count = (0 == 4 || 0 == 7) ? 1 : 0;
    }
 
    while (n) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
 
    if (count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");
 
    return 0;
}
