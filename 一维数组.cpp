#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    // 数组
    // 1、数据类型 数组名[数组长度]
    // int arr[5];
    // // 下标从0开始索引
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // // 访问
    // cout << arr[0] << endl; 

    // 2、数据类型 数组名[数组长度] = {值1，值2 ....}
    // int arr2[5] = {10, 20, 30, 40, 50}; //初始化的时候没有全部填写完，会用0填补剩余的数据
    // cout << arr2[0] << endl; 
    // cout << arr2[1] << endl; 
    // cout << arr2[2] << endl; 
    // cout << arr2[3] << endl; 
    // cout << arr2[4] << endl; 
    // 利用循环 输出数组中的元素
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr2[i] << endl;
    // }
    // 3、数据类型 数组名[] = {值1，值2 ...}
    // 定义数组的时候，必须有初始长度
    int arr3[] = {90,80,70,60,50,40,30,20,10};
    for (int i = 0; i < 9; i++)
    {
        cout << arr3[i] << endl;
    }
    
    system("pause");
    return 0;
}
