/*
#include <iostream>
using namespace std;

int main()
{
    // 整型
    short a = 10;
    cout << "值为" << a << endl;
    cout << "字符的长度为" << sizeof a << endl;  // short 2字节
    int b = 10;
    cout << "值为" << b << endl;
    cout << "字符的长度为" << sizeof b << endl;  // int 4字节
    long c = 10;
    cout << "值为" << c << endl;
    cout << "字符的长度为" << sizeof c << endl;  // long 4字节
    long long d = 10;
    cout << "值为" << d << endl;
    cout << "字符的长度为" << sizeof d << endl;  // longlong 8字节
    // 无符号整型
    unsigned short e = 10;
    cout << "值为" << e << endl;
    cout << "无符号字符的长度为" << sizeof e << endl;  // short 2字节 如果超出则回退到一个相反的极限如给一个65536 则值为0
    unsigned int f = 10;
    cout << "值为" << f << endl;
    cout << "无符号字符的长度为" << sizeof f << endl;  // int 4字节
    unsigned long g = 10;
    cout << "值为" << g << endl;
    cout << "无符号字符的长度为" << sizeof g << endl;  // long 4字节
    unsigned long long h = 10;
    cout << "值为" << h << endl;
    cout << "无符号字符的长度为" << sizeof h << endl;  // longlong 8字节      sizeof是一个操作符
    cin.get();
    // 整型 size_t 16或32位,一般用来表达内存和元素的个数


    // char类型
    char c1 = "c";  -->C
    char c2 = 80;  -->P
    char c3 = 0x50;  -->P
    char16_t c = u'于';  --> unicode 编码
    char32_t c = U'于';


    // 布尔类型 True/False   1byte(8 bits)
    true(1) or false(0)
    bool a = true;
    int b = a;  // 可以自动转为0/1
    bool c = -632;  // 非0即1
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    // float类型
    float 4byte 32bits
    double 8byte
    long double 16byte

    float f1 = 1.2f;
    float f2 = f1 * 1000000000000000;
    cout << std::fixed << std::setprecision(15) << f1 << endl;  1.200000047683716   采样点不同
    cout << std::fixed << std::setprecision(15) << f2 << endl;  1200000038076416.000000000000000
    return 1;
    如果大量密集型运算，float和double会差很多
    精度采样需要注意
    一般不不直接判断两个浮点数是否相同：
    if (f1 == f2)   //  bad
    if (fabs(f1-f2)) < FLT_EPSILON  //  good


    // inf  nan


    //Arithmetic Operators
    95 // decimal
    0137 //octal
    0x5F //hexadecimal

    95  //  int
    95u // unsigned int
    95l // long

    3.14145
    6.02e23
    1.6e-19
    3.0

    6.02e23L    //long double
    6.02e23f    //float
    6.02e23    //double


    const type qualifier
    const float PI = 3.14159f;  // 变量值不能再修改

    auto(since c++ 11)
    auto a = 2; type is int
    auto bc = 2.3; type is double
    auto c ; error in cpp
    auto d = a * 1.2;type is double
    {
    auto a = 2;
    a= 2.3;
    cout << a << endl;  a = 2
    }

    a++     先取值再加
    ++a     先加再取值

    float a = 17 / 5.0 ;  // 如果是17/5 则是整数除法 除非两边有一个是浮点类型

    unsigned char a = 255;
    unsigned char b = 1.3;
    int c = a + b;  // 在运算时，先把a和b都转换为int再进行运算





}
*/
//#include <iostream>
//#include "mul.h"
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    unsigned char a = 255;
//    unsigned char b = 1.3;
//    int c = a + b;
//    cout << c << endl;
//    cout << c << endl;
//    return 1;
//
//
//}