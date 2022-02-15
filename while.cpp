#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //while循环
    //在屏幕中打印0`9这10个数字
    int num = 0;
    while (num < 10)
    {
        cout << num << endl;
        num = num + 10;
    }
    system("pause");
    return 0;
}
