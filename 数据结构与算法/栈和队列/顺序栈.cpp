#include <iostream>

//顺序栈数据结构
typedef struct {
    int *base;
    int *top;
    int stackSize;
} SeqStack;

// 顺序栈的初始化
bool InitStack(SeqStack &S)
{
    S.base = new int [100];  // 申请100个元素内存
    if (!S.base) return false;
    S.top = S.base; // 栈顶指针等于栈底指针
    S.stackSize = 100;  // 栈元素最多为100
    std::cout << "Initial sequence stack list successfully!!!" <<std::endl;
    return true;
}

// 清空栈
bool DelStack(SeqStack &S)
{
    if (!S.base) return false;
    S.top = S.base;
    std::cout << "Delete Stack successfully!!!" << std::endl;
    return true;
}

// 顺序栈入栈
bool Push(SeqStack &S, int e)
{
    if (S.top - S.base == S.stackSize) return false;// 栈满
    *S.top ++ = e; // *S.top = e; *S.top ++;
    std::cout << "push a element into stack successfully!!!" << std::endl;
    return true;
}

// 顺序栈出栈
bool Pop(SeqStack &S, int &e)
{
    if (S.base == S.top) return false; // 栈空，无法删除
    e = *S.top --;
    std::cout << "pop a element successfully!!!" << std::endl;
    return true;
}