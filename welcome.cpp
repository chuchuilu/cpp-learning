#include "iostream"
using namespace std;
// 定义一个欢迎函数
void welcome()
{
    cout <<"请输入姓名:"<< endl;
    string name;
    cin >> name;

    // 输出欢迎语句
    cout <<"晚上好，" << name <<endl;
}