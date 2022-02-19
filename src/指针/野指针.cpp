#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // 野指针
    int *p = (int *)0x1000;
    cout << *p << endl;

    system("pause");
    return 0;
}
