#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 乘法口诀表
    int sum = 0;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++){
            sum = i * j;
            cout << sum <<" ";
        }
        cout << endl;
        /* code */
    }
    system("pause");
    return 0;
}
