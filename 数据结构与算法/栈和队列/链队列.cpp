#include <iostream>

// 链队列数据结构
typedef struct QNode{
    int data;
    struct QNode * next;
}QNode, *QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;

//链队初始化
bool InitQueue(LinkQueue &Q)
{
    Q.front = Q.rear = new QNode;
    if (!Q.front) return false;
    Q.front->next = nullptr;
    return true;
}
//链队销毁
bool DestroyQueue(LinkQueue &Q)
{
    while (Q.front){
        auto p = Q.front->next;
        delete Q.front;
        Q.front = p;
        return true;
    }
}

//链队入队
bool InsertQueue(LinkQueue &Q, int e){
    auto p = new QNode ;
    if (!p) return false;
    p->data = e;
    p->next = nullptr;
    Q.rear->next = p;
    Q.rear = p;
    return true;
}

//链队出队
bool DelQueue(LinkQueue &Q)
{
    if (Q.front == Q.rear) return false; // 队空
    auto p = Q.front->next;
    Q.front->next = p->next;
    if (Q.rear == p) Q.rear = Q.front; // 队空
    delete p;
    return true;
}