#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 先输出1~100数字
    for (int i = 0; i <= 100; i++)
    {
        if (i % 7 ==0 || i % 10 == 7 || i / 10 ==7)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}
