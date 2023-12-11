#include <iostream>
using namespace std;

/*
int main()
{
    int num = 0;
    int & alia_num = num;
    alia_num = 20;
    cout << "num = " << num << endl;
    cout << "alia_num = " << alia_num << endl;

    alia_num = 999;
    cout << "num = " << num << endl;
    cout << "alia_num = " << alia_num << endl;
}
*/
template<typename A>
A sum(A x, A y)
{
    cout << "input type " << typeid(A).name() << endl;
    return x + y;
}

template float sum<float>(float, float );

int main()
{
    auto val = sum(2.1, 3.4);
    cout << "sum = " << sum(2.0,5.0) << endl;
    cout << "val = " << val << endl;
}
