#include <iostream>
using namespace std;

// const使用场景
struct student
{
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};
// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printstudent(const student *s)
{
    //加入const之后，一旦有修改的操作就会报错，可以防止我们误操作
    // s->age = 150;

    cout << " 姓名：" << s->name
         << " 年龄：" << s->age
         << " 分数：" << s->score << endl;
}

int main(int argc, char const *argv[])
{

    struct student s = {"张三", 15, 70};

    // 通过函数打印结构体变量信息
    printstudent(&s);

    system("pause");
    return 0;
}
