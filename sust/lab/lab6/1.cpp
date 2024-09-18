#include<iostream>
using namespace std;


// 声明周期问题,当函数退出后，在函数栈上的内存都会被回收
// int *create_array(int size)
// {
//     int arr[size];
//     for (int i = 0; i < size; i++)
//         arr[i] = i * 10;
//     return arr;
// }

int *create_array(int size)
{
    // 内存分配在堆上，函数退出不会影响它
    int *arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        arr[i] = i * 10;
    return arr;
}

int main()
{
    int len = 16;
    int *ptr = create_array(len);
    for (int i = 0; i < len; i++)
        cout << ptr[i] << " ";
    free(ptr);
    return 0;
}