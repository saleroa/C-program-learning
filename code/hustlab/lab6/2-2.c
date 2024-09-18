#include <stdio.h>
#include <string.h>
// version 1
// int main(void)
// {
//     // 函数指针
//     char *(*p)(char * ,const char *);
//     char a[80], b[80], *result;
//     int choice;
//     while (1)
//     {
//         do
//         {
//             printf("\t\t1 copy string.\n");
//             printf("\t\t2 connect string.\n");
//             printf("\t\t3 parse string.\n");
//             printf("\t\t4 exit.\n");
//             printf("\t\tinput a number (1-4) please.\n");
//             scanf("%d", &choice);
//         } while (choice < 1 || choice > 4);
//         switch (choice)
//         {
//         case 1:
//             p = strcpy;
//             break;
//         case 2:
//             p = strcat;
//             break;
//         case 3:
//             p = strtok;
//             break;
//         case 4:
//             goto down;
//         }
//         getchar();
//         printf("input the first string please!\n");
//         gets(a);
//         printf("input the second string please!\n");
//         gets(b);
//         result = p(a, b);
//         printf("the result is %s\n", result);
//     }
// down:
//     return 0;
// }

// version 2
int main(void)
{
    // 函数指针 de 数组
    char *(*p[3])(char * ,const char *) = {
        strcpy,
        strcat,
        strtok,
    };
    char a[80], b[80], *result;
    int choice;
    while (1)
    {
        do
        {
            printf("\t\t1 copy string.\n");
            printf("\t\t2 connect string.\n");
            printf("\t\t3 parse string.\n");
            printf("\t\t4 exit.\n");
            printf("\t\tinput a number (1-4) please.\n");
            scanf("%d", &choice);
        } while (choice < 1 || choice > 4);
        if(choice == 4){
            goto down;
        }
        getchar();
        printf("input the first string please!\n");
        gets(a);
        printf("input the second string please!\n");
        gets(b);
        result = p[choice-1](a, b);
        printf("the result is %s\n", result);
    }
down:
    return 0;
}
