#include <stdio.h>
#define FLOAT_NUM 10
int main()
{
    float numbers[FLOAT_NUM];
    FILE *file;
    // 从键盘读取 10 个浮点数
    printf("please input your number:\n");
    for (int i = 0; i < FLOAT_NUM; i++)
    {
        scanf("%f", &numbers[i]);
    }
    // 将浮点数以二进制的形式写入文件
    file = fopen("float.dat", "wb");
    if (file == NULL)
    {
        perror("Error opening file for writing");
        return 1;
    }
    for (int i = 0; i < FLOAT_NUM; ++i) {
        fwrite(&numbers[i], sizeof(float), 1, file);
    }
    fclose(file);
     // 从文件中读取浮点数并显示
    file = fopen("float.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    printf("\nNumbers read from file:\n");
    for (int i = 0; i < FLOAT_NUM; ++i) {
        fread(&numbers[i], sizeof(float), 1, file);
        printf("%f ", numbers[i]);
    }
    printf("\n");

    // 字节读取
}