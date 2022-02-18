#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // continue语句
    for (int i = 0; i <= 100; i++)
    {
        // 如果是奇数输出，偶数不输出
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    system("pause");
    return 0;
}
