#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    
    if (scanf("%d", &n) != 1) {
        return 1; 
    }

   
    for (int i = 0; i < n; i++) {
        int num;
        if (scanf("%d", &num) != 1) {
            return 1;
        }
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}