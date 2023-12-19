#include <iostream>

//循环队列数据结构
typedef struct {
    int *base;
    int front;  //队头下标
    int rear;  //队尾下表
}SeqQueue;

// 队列初始化
bool InitQueue(SeqQueue &Q)
{
    Q.base = new int [100];
    if (!Q.base) return false;
    Q.front = Q.rear = 0;
    std::cout << "Init Queue successfully!!!" << std::endl;
    return true;
}

// 循环队列入队
bool InitQueue(SeqQueue &Q, int e)
{
    if ((Q.rear + 1) % 100 == Q.front) return false;  // 栈满
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % 100;
    std::cout << "Insert data successfully!!!" << std::endl;
    return true;
}

// 循环队列出队
bool OutQueue(SeqQueue &Q, int &e)
{
    if (Q.front == Q.rear) return false;  // 队空
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % 100;
    return true;
}
