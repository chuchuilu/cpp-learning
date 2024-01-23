#include <iostream>
#include <vector>
#include <cstring>

// 串的顺序存储结构
typedef struct {
    char ch[100];  // 数组
    size_t length;  // 长度
}SString;

//next函数
void get_next(const SString& T, std::vector<int>& next) {
    size_t i = 1, j = 0;
    next[1] = 0;

    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            next[i] = j;
        } else {
            j = next[j];
        }
    }
}


// 串的模式匹配算法 KMP算法
//  i不再回溯用next[j]获取j回溯的位置
int Index_KMP(SString S, SString T, size_t pos)
{
    size_t i = pos, j = 1;  // 从i位置开始匹配
    std::vector<int> next(T.length + 1, 0);
    get_next(T, next);

    for (int k = 1; k < next.size(); ++k) {
        std::cout << next[k] << " " << std::endl;
    }

    while (i < S.length && j <= T.length)  // 在这里修改条件
    {
        if (j == 0 || S.ch[i] == T.ch[j])
        {
            i++;
            j++;
        }  // 匹配下一字符
        else
        {
            j = next[j];  // i不变，j回溯
        }
    }

    if (j > T.length)
        return i - j; // 匹配到结果
    else
        return -1; // 没匹配到结果
}


int main()
{
    SString main_string, sub_string;
    strcpy(main_string.ch, "ababcabaa");
    strcpy(sub_string.ch, "ababc");
    main_string.length = strlen(main_string.ch);
    sub_string.length = strlen(sub_string.ch);
    std::cout << "main string : " << main_string.ch << " length : " << main_string.length << std::endl;
    std::cout << "sub string : " << sub_string.ch << " length : " << sub_string.length << std::endl;

    std::vector<int> next(sub_string.length + 1, 0);
    get_next(sub_string, next);

    // 打印部分匹配表
    std::cout << "Partial Match Table: ";
    for (size_t i = 1; i <= sub_string.length; ++i) {
        std::cout << next[i] << " ";
    }
    std::cout << std::endl;

//    int result = Index_KMP(main_string, sub_string, 1);
//    if (result != -1) {
//        std::cout << "Pattern found at position: " << result << std::endl;
//    }
//    else {
//        std::cout << "Pattern not found in the main string." << std::endl;
//    }
//
//    return 0;

}