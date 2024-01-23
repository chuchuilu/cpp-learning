#include <iostream>

// 串的顺序存储结构
typedef struct {
    char ch[100];  // 数组
    size_t length;  // 长度
}SString;

// 串的模式匹配算法 Brute Force算法 简单匹配算法
// 匹配失败，回溯i = i - (j - 1) + 1 回到下一个遍历的位置 j = 1 -> 匹配串从头开始遍历
int Index_BF(SString S, SString T, int pos)
{
    size_t i = pos, j = 1;  // 从i位置开始匹配
    while (i <= S.length && j <= T.length)  // i没到头，j也没到头就一直遍历
    {
        if (S.ch[i] == T.ch[j])
        {
            i++;
            j++;
        }  // 匹配下一字符
        else
        {
            i = i - j + 2; // i回溯到下一个节点
            j = 1;  // j从头开始
        }


    }

    if (j > T.length)
        return i - T.length ; // 匹配到结果
    else
        return 0; // 没匹配到结果
}

int main()
{
    SString main_string, sub_string;
    strcpy_s(main_string.ch, "aaaaab");
    strcpy_s(sub_string.ch, "aab");
    main_string.length = strlen(main_string.ch);
    sub_string.length = strlen(sub_string.ch);
    std::cout << main_string.length << std::endl;
    std::cout << main_string.ch << std::endl;
    std::cout << sub_string.length << std::endl;
    std::cout << sub_string.ch << std::endl;

    // 调用BF算法匹配
    std::cout << "the location is " << Index_BF(main_string, sub_string, 1) << std::endl;
}