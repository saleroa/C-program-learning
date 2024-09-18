// #include <stdio.h>

// // void turn(char **a, int n, int m)
// // {
// //     for (int i = m-1; i > -1; i--)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             printf("%c",*(*(a+j)+i));
// //         }
// //         printf("\n");
// //     }
// // }

// int main()
// {
//     int n, m;
//     printf("please input n,m: \n");
//     scanf("%d %d", &n, &m);
//     getchar();
//     getchar();
//     // 变长数组相关
//     char a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%c", &a[i][j]);
//         }
//     }

//     // turn(a, n, m);

//     return 0;
// }


#include<stdio.h>
void turn(int *);
int m, n;
int main(void) {
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nInput complete!\n");
    int *ptr=(int*)&matrix[0];
    turn(ptr);
    return 0;
}
void turn(int *ptr) {
    for (int i = m-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            // 希望打印matrix[j][i]
            printf("%d ", *(ptr + j*m + i));
        }
        printf("\n");
    }   
}