#include <iostream>
using namespace std;
/*
    int num = 10;
    int * p1 = nullptr, * p2 = nullptr;
    cout << p1 << endl;
    p1 = &num;
    p2 = &num;
    cout << num << endl;
    cout << p1 << endl;
    cout << *p1 << endl;
    * p2 = 20;
    cout << * p2 << endl;
    cout << * p1 << endl;
    cout << num << endl;




 //结构体指针
 struct  Sutdent
{
    char name[4];
    int born;
    bool male;
};
int main()
{
    Sutdent stu = {.name = "li" , .born = 2000, .male = true};
    Sutdent *pStu = &stu;
    cout << &stu << endl;
    cout << pStu << endl;
    cout << pStu->born << endl;
    strncpy_s(pStu->name, "yu", 2);
    cout << pStu->name << endl;
    cout << (*pStu).male << endl;
    cout << pStu->born << endl;

    cout << sizeof(pStu) << endl;
    cout << &(pStu->name) << endl;
    cout << &(pStu->born) << endl;
    cout << &(pStu->male) << endl;

}



// 双重指针
 int main()
{
    int num = 10;
    int * p = &num;
    int **pp = &p;
    *(*pp) = 20;
    cout << num << endl;


// 结构指针
 int main()
{
    Sutdent students[128];
    Sutdent * p0 = &students[0];
    Sutdent * p1 = &students[1];
    cout << p0 << endl;
    cout << sizeof (*p0) << endl;
    cout << p1 << endl;

}
}



 //指针运算
     int numbers[4] = {0, 1, 2, 3};

    int *p = numbers + 1;
    p++;
    *p = 999;
//    *(p - 1) = 888;
//    cout << numbers[1] << endl;
// */
//struct  Sutdent {
//    char name[4];
//    int born;
//    bool male;
//};
//int main()
//{
//
//    int *p = new int(5) ;
//    cout << p << endl;
//    cout << *p << endl;
//
//}