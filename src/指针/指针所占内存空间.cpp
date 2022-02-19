#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 指针所占的内存空间
    int a = 10;
    // int *p;
    // p = &a;
    int *p = &a;

    cout << "sizeof(int *) =" << sizeof(p) << endl;

    system("pause");
    return 0;
}
