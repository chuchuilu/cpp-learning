#include <iostream>

struct SqList  // 线性表定义
{
    int *elem;
    int length;
};

bool InitList(SqList &L)  // 线性表初始化
{
    L.elem = new int [100]{1,2,3,4,5,6,7,8};
    if (!L.elem)
    {
        std::cerr<< "Error" << std::endl;
        return false;
    }
    L.length = 8;
    std::cout << "allocate memory successfully"  << std::endl;
    return true;
}

void DestroyList(SqList &L)  // 线性表销毁
{
    if (L.elem)
    {
        delete L.elem;
        std::cout << "release memory successfully"  << std::endl;
    }
}

void ClearList(SqList &L)  // 线性表清空
{
    L.length = 0;
}

void Show_List(SqList &L)  //遍历线性表
{
    for(int i=0; i < L.length; i++)
        std::cout <<i << " ----> " << L.elem[i] << std::endl;
    std::cout <<"***************************" << std::endl;
}

bool IsEmpty(const SqList &L)  // 判断线性表是否为空
{
    return static_cast<bool >(L.length) ;
}

int GetElem(const SqList &L, size_t i)  // 获取元素
{
    if(i<0 || i>100)
    {
        std::cout << "out of range" << std::endl;
        return 0;
    }
    return L.elem[i -1];
}

void InsertElem(SqList &L, int element, int index)  // 元素插入
{
    if (index<0 || index > L.length + 1){
        std::cerr << "index error" << std::endl;
        return;
    }
    for (int i = L.length; i >= index; i--) {
        L.elem[i] = L.elem[i-1];
    }
    L.elem[index -1] = element;
    L.length ++;
}

void DelElem(SqList &L, int index)  // 元素删除
{
    if (index<0 || index > L.length + 1){
        std::cerr << "index error" << std::endl;
        return;
    }
    for (int i = index - 1; i < L.length - 1; ++i) {
        L.elem[i] = L.elem[i + 1];
    }

    L.length --;
}
int main(){

    SqList seq_List{};
    InitList(seq_List);
    Show_List(seq_List);
    InsertElem(seq_List, 10, 2);
    Show_List(seq_List);
    DelElem(seq_List,2);
    Show_List(seq_List);
    DestroyList(seq_List);

}