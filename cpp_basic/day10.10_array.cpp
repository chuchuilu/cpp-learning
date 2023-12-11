#include <iostream>
#include <cstring>
#include <string>
using namespace std;
/*
 * array type
 int main()
{
    int number_array1[5] = {1};
    int number_array2[5] = {0, 1, 2, 3 , 4};
    for (int i = 0; i < 5; ++i)
    {
        cout << "array number2 is " << number_array2[i] <<"array number1 is "<< number_array1[i] << endl;
    }
}
//未知长度数组
     int num_array[] = {1, 1, };
    for (int i = 0; i < 2; ++i) {
        cout << num_array[i] << endl;
    }
// 不可直接赋值
     int array1[4] = {4, 3, 2, 1};
    int array2[4];
    array2 = array1;  ----> error
//可取值赋值
     int array1[4] = {4, 3, 2, 1};
    int array2[4];
    array2[0] = array1[0];  -----> okay  对array2进行赋值操作
// 数组越界  如果越界，去查询内存中相邻位置去赋值，不会进行编写检查，效率高，缺点：程序容易出错
     int num_array[5];
    for (int i = -1; i <=5 ; ++i) {
        num_array[i] = i * i;
    }
    for (int i = -1; i <=5 ; ++i) {
        cout << "num_array["<< i <<"]" << num_array[i] << endl;
    }
// 实际上，数组被初始化之后，申请一块内存，有index ，value ， 和address。
 // 多维数组
int main()
{
    int mat[2][3] = {{1,2 ,3},{4,5 ,6 }};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << "," << endl;
        }
    }

}
 // 如果是一个多维数组函数，在传参时，一定要给列值，不然内存不知道第二行，或者下一行从哪里开始

 // 数组常量
 const float values[4] = {1.1f, 2.2f ......} // 数组内的函数不能修改
 //数组类型字符串，最后要加0，停止搜索
 char rabbit1[2] = {'p', 'z'}; --> 结果不符合预期
 char rabbit[5] = {'p', 'e', 't', '\0', 'o'};  --> 到\0 停止
 char rabbit1[3] = {'p', 'z'};
//初始化常量字符串
char rabbit[] = "abcd";  --> 实际内存存储 'a' 'b' 'c' 'd' 0
cout << rabbit << endl;
//字符串拷贝方法
 copy --> strcpy  ,strncpy
字符串拼接 --> strcat
字符串比较 --> strcmp
    char str1[] = "hello \0 23";
    char str2[] = "night";
    char result[128];
    strcpy_s(result, str1);
    cout << result << endl;
    strcat_s(result, str2);
    cout << result << endl;
    strcpy_s(result, str1);
    cout << result << endl;
    cout << strcmp(str1, str2) << endl;


    // string 类   也无越界检查
    string a = "晚上";
    string b = "好";
    string result = a + " ," + b;
    cout << result << endl;
    cout << sizeof a << endl;
    cout << (a == b) << endl;
 */
// string class

//int main()
//{
//    string a = "晚上";
//    string b = "好";
//    string result = a + " ," + b;
//    cout << result << endl;
//    cout << sizeof a << endl;
//    cout << (a == b) << endl;
//
//    wstring wstr = L"Hello, 你好";
//    wcout << wstr << endl;
//
//
//
//}