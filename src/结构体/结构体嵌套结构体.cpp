#include <iostream>
using namespace std;

// 定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
// 定义老师结构体
struct teacher
{
    int id;             //教师编号
    string name;        //教师姓名
    int age;            //年龄
    struct student stu; //辅导的学生
};

int main(int argc, char const *argv[])
{
    // 嵌套结构体使用
    // 创建老师
    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;
    cout
        << " 老师姓名：" << t.name
        << " 老师编号：" << t.id
        << " 老师年龄：" << t.age
        << endl
        << " 老师辅导的学生姓名：" << t.stu.name
        << " 学生的年龄：" << t.stu.age
        << " 学生的分数：" << t.stu.score
        << endl;

    system("pause");
    return 0;
}
