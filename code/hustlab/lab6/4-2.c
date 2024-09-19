#include<stdio.h>


int m, n;

void turn(int *);
void turn_1(int a [][m]) ;
void turn_2(int a [][m]) ;



int main(void) {
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nInput complete!\n");

    // int *ptr=(int*)&matrix[0]; // 等价下面操作，为了获取到第一个 int 的地址，方便做加法
    int *ptr=&matrix[0][0];

    turn(ptr);
    turn_1(matrix);
    turn_2(matrix);
    return 0;
}


// 数组就是一块连续内存,只有字节与字节的分隔，即使是二维数组，也是一块连续内存，每个数组之间没有明确界限
// 所以传入二维数组的时候需要 a[][m] , 传入一个 m 来对二维数组进行数组间的间隔，方便指针运算，而传入 char** 是指针的指针，没有间隔

// 未知情况下的
void turn(int *ptr) {
    for (int i = m-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            // 希望打印matrix[j][i]
            printf("%d ", *(ptr + j*m + i));
        }
        printf("\n");
    }   
}


// 预定输入 2、3
void turn_1(int a [][m]) {
    for (int i = m-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            // 希望打印matrix[j][i]
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }   
}
// 预定输入 2、3
void turn_2(int a [][m]) {
    for (int i = m-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            // 希望打印matrix[j][i]
            printf("%d ", *(*(a+j)+i));
        }
        printf("\n");
    }   
}