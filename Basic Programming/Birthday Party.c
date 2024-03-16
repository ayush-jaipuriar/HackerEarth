#include <stdio.h>

int main() {
    int t;
    long long n, m;
    
    // It's good practice to check the return value of scanf
    if (scanf("%d", &t) != 1) return 1;
    
    while (t--) {
        if (scanf("%lld %lld", &n, &m) != 2) return 1;
        
        // Using ternary operator for compactness
        printf(m % n == 0 ? "Yes\n" : "No\n");
    }

    return 0;
}
