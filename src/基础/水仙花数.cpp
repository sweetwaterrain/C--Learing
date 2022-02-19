#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 1、打印所有三位数字
    int num = 100;
    cout<<num<<endl;
    // 2、找到水仙花数
    do
    {
        int a = 0;
        int b = 0;
        int c = 0;

        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;

        if (a*a*a + b*b*b + c*c*c == num)
        {
           cout<<num<<endl;
        }
        
        num++;
    } while (num < 1000);
    
    system("pause");
    return 0;
}
