#include<iostream>
using namespace std;
#include <ctime>
int main(int argc, char const *argv[])
{
    // 添加随机数种子 利用系统时间生成随机数
    srand((unsigned int) time(NULL));

    //1、系统生成随机数
    int number = rand() % 100 + 1;     // 生成0~`99随机数

    //2、玩家进行猜测
    int val = 0;

    //3、判断玩家的猜测
    while (1)
    {
        cin >> val;
        if (val > number)
        {
            cout<<"猜测过大"<<endl;
        }else if (val < number)
        {
            cout<<"猜测过小"<<endl;
        }else
        {
            cout<<"猜测正确"<<endl;
            break;
        }
    }
    
    // 猜对 退出游戏
    // 猜错 提示猜的结果 过大或过小 重新返回第二步

    system("pause");
    return 0;
}
