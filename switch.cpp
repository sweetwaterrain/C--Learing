#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //1、提示用户给电影打分
    cout << "请给电影进行打分"<<endl;
    //2、用户开始进行打分
    int score = 0;
    cin >> score;
    cout << "您打的分数为：" << score << endl;
    //3、根据用户输入的分数来提示最后的结果

    switch (score)
    {
    case 10:
        cout<<"您认为是经典电影"<<endl;
        break;
    case 9:
        cout<<"您认为是经典电影"<<endl;
        break;
    case 8:
        cout<<"您认为是优秀电影"<<endl;
        break;
    case 7:
        cout<<"您认为是优秀电影"<<endl;
        break;
    case 6:
        cout<<"您认为是一般电影"<<endl;
        break;
    case 5:
        cout<<"您认为是一般电影"<<endl;
        break;
    default:
        cout<<"您认为是烂片"<<endl;
        break;
    }
    return 0;
}
