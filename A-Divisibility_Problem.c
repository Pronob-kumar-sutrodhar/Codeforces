#include <stdio.h>
 
void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", (a % b == 0) ? 0 : (b - (a % b)));
    }
}
 
int main() {
    solve();
    return 0;
}
