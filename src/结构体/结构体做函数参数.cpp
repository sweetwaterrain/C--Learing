#include <iostream>
using namespace std;

// 定义学生结构体
struct student
{
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};
// 打印学生信息函数
// 1、值传递
// 形参改变，实参不变
void printStudent1(student s)
{
    s.age = 100;
    cout << " 子函数1中打印 姓名：" << s.name
         << " 年龄：" << s.age
         << " 分数：" << s.score
         << endl;
}
// 2、地址传递
void printStudent2(student *p)
{
    p->age = 200;
    cout << " 子函数2中打印 姓名：" << p->name
         << " 年龄：" << p->age
         << " 分数：" << p->score
         << endl;
}

int main(int argc, char const *argv[])
{

    // 结构体做函数参数
    // 将学生传入到一个参数中，打印学生身上的所有信息

    // 创建结构体变量
    student s;
    s.name = "张三";
    s.age = 20;
    s.score = 85;
    // printStudent1(s);
    printStudent2(&s);

    cout << " main函数中打印 姓名：" << s.name
         << " 年龄：" << s.age
         << " 分数：" << s.score
         << endl;

    system("pause");
    return 0;
}
