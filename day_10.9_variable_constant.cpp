#include <iostream>
using namespace std;  //命名空间
/*
// 主函数输出hello world

// 引入函数声明
void welcome();

int main()
{
    //    输出一行信息
    cout <<"hello world!!! cpp learning"<< endl;


    welcome();



    // 等待键盘输入
    cin.get();
    cin.get();
}

*/



//变量
/*
// 定义一个全局变量
int number;

int main()
{
    // 定义变量
    int a = 10, b;
    b = 10;
    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
    b = 25;
    cout <<"new b = " << b << endl;

    int number = 20;
    cout <<"number = " << number << endl;  //访问局部变量
    cout <<"::number = " << ::number << endl;  //访问全局变量,全局变量可以不用做初始化,默认为0，但局部变量不可以
}
*/



//常量
//#define PI 3.1415926   //使用宏定义 不推荐
//const float PI = 3.14159;  // 常量PI必须做输出，并且不能在下文更改
//int main()
//{
//
//    cout << "Π的值是" << PI << endl;
//    cin.get();
//}