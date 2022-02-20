#include <iostream>
#include "swap.h"
using namespace std;

// 冒泡排序 参数一 数组的首地址 参数二 数组长度
void BubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            // 如果j > j+1的值 交换数字
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
            }
        }
    }
}
// 打印数组
void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    // 1、先创建数组
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    // 2、创建函数，实现冒泡排序
    BubbleSort(arr, len);
    // 3、打印排序后的数组
    printArray(arr, len);

    system("pause");
    return 0;
}
