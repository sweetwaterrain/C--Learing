#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    // 1、创建5只小猪体重的数组
    int arr[5] = {300,350,200,400,250};
    // 2、从数组中找最大值
    int max = 0; // 先认定一个最大值0
    for (int i = 0; i < 5; i++)
    {
        // 如果访问的数组中的元素比我认定的最大值还大，更新最大值
        if (arr[i] > max){
            max = arr[i];
        }

    }
    // 3、打印最大值
    cout << "最重的小猪的体重为：" << max << endl;
    system("pause");
    return 0;
}
