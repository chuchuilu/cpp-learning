#include <iostream>
using namespace std;
/*
     struct Student{  // 定义一个结构体
        char name[4];
        int born;
        bool male;
    };
//    struct Student stu;  // 函数调用实现
//    strcpy_s(stu.name, "zhu");
//    stu.born = 2000;
//    stu.male = true;
//
//    struct Student stu2 = {"hon", 2001, false};
//    cout << stu2.born << endl;
//
//    struct Student student[100];
//    student[50].born = 2002;
//    strcpy_s(student[50].name, "qq");
//    cout << student << endl;
//    cout << student[50].name << endl;
//    cout << student[50].born << endl;
    cout << sizeof (Student) << endl;  //实际上12个字节 计算机为了存储io方便，把很多数据对齐， 内存 --> cash --> 寄存器
    // 4的倍数 8的倍数甚至更高
    Student stu{};
    stu.born = 2008;
    cout << stu.born << endl;
 */
//
//
//
//enum datatype {TYPE_INT8=1, TYPE_INT16=2, TYPE_INT32=4, TYPE_INT64=8};
//
//struct Point {
//    enum datatype type;  // 给一个别名type
//    union {
//        int8_t data8[3];
//        int16_t data16[3];
//        int32_t data32[3];
//        int64_t data64[3];
//    };
//};
//
//size_t datawidth(struct Point pt) {
//    return size_t(pt.type) * 3;
//}
//
//int64_t l1norm(struct Point pt)
//{
//    int64_t result = 0;
//    switch (pt.type) {
//        case (TYPE_INT8):
//            result = abs(pt.data8[0]) + abs(pt.data8[1]) + abs(pt.data8[2]);
//            break;
//        case (TYPE_INT16):
//            result = abs(pt.data16[0]) + abs(pt.data16[1]) + abs(pt.data16[2]);
//            break;
//
//    return result;
//
//    }
//}
//int main() {
//    Point point1 = {.type = TYPE_INT8, .data8 = {4, 5, -3}};
//    Point point2 = {.type = TYPE_INT16, .data16 = {6, 1, -1}};
//    cout << "data width " << datawidth(point1) << endl;
//    cout << "data width " << datawidth(point2) << endl;
//
//    cout << "第一范数" << l1norm(point1) << endl;
//    cout << "第一范数" << l1norm(point2) << endl;
//
//
////    std::cout << "Data Width: " << datawidth(myPoint) << " bytes" << std::endl;
////    std::cout << "Data Width: " << size_t(myPoint.type)<< " bytes" << std::endl;
////    std::cout << "Data Width: " << size_t(10) * 3<< "" << std::endl;
//
//    return 0;
//}
//
//// typedef用法
//// typedef int myint;   --> 定义一个别名
