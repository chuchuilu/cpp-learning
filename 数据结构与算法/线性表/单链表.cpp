#include <iostream>

typedef struct Lnode {
    int data;
    Lnode *next;
}Lnode,* LinkList;

// 单链表置空
void InitList(LinkList &L)
{
    L = new Lnode;
    L->next = nullptr;
    std::cout << "link list is initialed successfully" << std::endl;
}

//头插法拆创建单向链表
void CreatLinkList(LinkList &L, size_t n)
{
    for (int i = 0; i < n; ++i) {
        auto *p = new Lnode ;
        std::cin >> p -> data;
        p->next = L->next;
        L->next = p;
    }
    std::cout << "head insert creat linklist successfully!" << std::endl;
}

//尾插法创建单向链表
void CreatLinkTail(LinkList &L, size_t n)
{
    auto r = L;
    for (int i = 0; i < n; ++i) {
        auto *p = new Lnode ;
        std::cin >> p->data;
        p->next = nullptr;
        r->next = p;
        r = p;
    }
    std::cout << "tail insert creat link list successfully!" << std::endl;
}

//判断链表是否为空
void IsEmpty(LinkList &L)
{
    if(L->next)
    {
        std::cout << "NOT EMPTY" << std::endl;
    } else std::cout << "EMPTY" << std::endl;
}

//销毁链表
bool DestroyList(LinkList &L)
{
    Lnode *p = nullptr;
    while (L){
        p = L;
        L = L->next;
        delete p;
    }
    return true;
}

//清空单链表
bool ClearList(LinkList &L)
{
    Lnode *p,*q = nullptr;
    p = L->next;
    while (p){
        q = p->next;
        delete p;
        p = q;
    }
    L->next = nullptr;
    return true;
}

//统计链表长度
size_t GetLength(const LinkList &L)
{
    Lnode *p = nullptr;
    p = L->next;
    size_t count = 0;
    while (p){
        count ++;
        p = p->next;
    }
    std::cout <<"The length of linklist is " <<count << std::endl;
    return count;
}

//取链表中第i个元素的值
bool GetElement(LinkList &L, int i)
{
    Lnode *p = L->next; int j = 1;
    while (p && j < i){
        p = p->next;
        j ++;
    }
    if (!p || j > i) return false;
    std::cout << i << " -------------> " << p->data << std::endl;
    return true;
}

//按值查找链表
bool GetElementName(LinkList &L, int name)
{
    Lnode *p = L->next;int j = 1;
    while (p && p->data != name){
        p = p->next;j++;
    }
    if (p)
    {
        std::cout << name << " in linklist location is " << j << " node " << std::endl;
        return true;
    } else return false;
}

//插入结点
bool InsertElement(LinkList &L, int i, int data)
{
    Lnode *p = L;int j = 0;
    while (p && j < i -1) //寻找第i-1个结点
    {
        p = p->next;    j++;
    }
    if (!p || j > i) return false;
    auto n = new Lnode ;
    n->next = p->next;
    p->next = n;
    std::cout << "insert node in location: " << i << std::endl;
    return true;
}

//删除结点
bool DeleteElement(LinkList &L, int i)
{
    Lnode *p,*q = nullptr;
    p = L;  int j = 0;
    while (p && j < i - 1){ p = p->next; j++; }
    if (!p || j > i - 1) return false;
    q = p->next;
    p->next = q->next;
    delete q;
    std::cout << "delete node " << i << std::endl;
    return true;
}
//合并两个链表
void MergeList(LinkList &La, LinkList &Lb, LinkList &Lc)
{
    Lnode *pa = La->next;
    Lnode *pb = Lb->next;
    Lc = La;
    Lnode *pc = Lc;
    while (pa && pb)
    {
        if (pa->data <= pb->data) //尾插法，插入元素
        {
            //pc的指针域指向小元素的地址
            pc->next = pa;
            //移动pc指针，使得pc永远都指向最后链表Lc的最后一个元素
            pc = pc->next;
            //pa的元素使用过后，要向后移动pa
            pa = pa->next;
        }
        else
        {
            //pc的指针域指向小元素的地址
            pc->next = pb;
            //移动pc指针，使得pc永远都指向最后链表Lc的最后一个元素
            pc = pc->next;
            //pb的元素使用过后，要向后移动pa
            pb = pb->next;
        }
    }
    //上面的while循环执行完毕后，较长的链表还会余留一段元素，这段元素的起始地址就是pa（或pb
    pc->next = (pa ? pa : pb);
    //链表合并完毕，释放Lb的头结点
    delete Lb;
}

int main()
{
    //初始化链表
    LinkList List;
    InitList(List);

//    //头插创建链表
//    CreatLinkList(List, 3);

    //尾插法创建链表
    CreatLinkTail(List, 3);
    IsEmpty(List);
    GetLength(List);
    GetElement(List, 2);
    GetElementName(List,4);
    InsertElement(List, 2, 10);
    DeleteElement(List,2);
    GetLength(List);



}