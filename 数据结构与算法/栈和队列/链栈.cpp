#include <iostream>

// 链栈的表示和实现
typedef struct StackNode
{
    int data;
    struct StackNode *next;
}StackNode, *LinkStack;

// 头指针就是栈顶，不存在栈满情况发生

// 链栈初始化
bool InitStack(LinkStack &S)
{
    S = nullptr;
    std::cout << "Initial successfully!!!" << std::endl;
    return true;
}

//链栈入栈
bool Push(LinkStack &S, int e)
{
    auto p = new StackNode;
    p->next = S;
    p->data = e;
    S = p;
    std::cout << "push element successfully!!!" << std::endl;
    return true;
}

//链栈出栈
bool Pop(LinkStack &S)
{
    if (S == nullptr) return false;
    auto p = S;
    S = S->next;
    delete p;
    std::cout << "pop element successfully!!!" << std::endl;
    return true;
}
