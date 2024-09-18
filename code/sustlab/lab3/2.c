#include <stdio.h>

int main() {
    int n = 5;
    int sum = 0;
    while (n > 0) {
        sum += n;
        printf("n = %d  ", n);
        printf("sum = %d  ", sum);
        // n--; // 递减n的值
    }
    return 0;
}
