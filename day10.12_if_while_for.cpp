#include <iostream>
using namespace std;

/*
 // if -- else if --else
int main()
{
    int a;
    cin >> a;
    if (a < 5)
    {
        cout << "a的值小于5" << a << endl;
        cout << "a is " << a << endl;
    }
    else if (a > 10)
    {
        cout << "a的值大于10" << a << endl;
        cout << "a is " << a << endl;
    }
    else
    {
        cout << "a的值大于5小于10 " << a << endl;
    }


    // 三元运算符
int main()
{
    bool isPositive = false;
    int factor;
    factor = isPositive ? 1 : -1;
    cout << factor << endl;
}
}



 // 条件判断  == / != / < / > / <= / >= /
// logical expressions  ! > && > ||


 // while
int main()
{
    int a = 5;
    while (a > 0)
    {
        --a;
        cout << "a = " << a << endl;
    }
}



// do while
int main()
{
    int a = 5;
    do {
        --a;
        cout << "a = " << a << endl;
    } while (a > 0);

}


 // break
int main()
{
    int a = 5;
    while (a > 0)
    {
        --a;
        cout << "a = " << a << endl;
        if (a == 3)
            break;
    }

}


// continue
int main()
{
    int a = 5;
    while (a >= 0)
    {
        --a;
        if (a == 3)
            continue;
        cout << "a = " << a << endl;
    }

}


// for loop   i的作用域只在for循环内部生效  for(;;) --> while(true)
int main()
{
    int sum = 0;
    for (int i = 0; i < 10; ++i)
    {
        sum += i;
        cout << "Line" << i << endl;
    }
    cout << sum << endl;
}


 // goto Statement



 // switch
int main()
{
    char chart;
    cin >> chart;
    switch (chart)
    {
        case 'a':
        case 'A':
            cout << "输入的值为a" << endl;
            break;
        case 'b':
            cout << "输入的值为b" << endl;
            break;
        default:
            cout << "输入的啥也不是" << endl;
            break;
    }
}
*/


// switch
int main()
{
    char chart;
    cin >> chart;
    switch (chart)
    {
        case 'a':
        case 'A':
            cout << "输入的值为a" << endl;
            break;
        case 'b':
            cout << "输入的值为b" << endl;
            break;
        default:
            cout << "输入的啥也不是" << endl;
            break;
    }
}