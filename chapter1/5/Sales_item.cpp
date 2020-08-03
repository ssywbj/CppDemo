
#include <iostream> //属于标准库的头文件用尖括号“<>”括起来
#include "data/Sales_item.h"//不属于标准库文件的头文件，用双引号“""”括过来

using namespace std;

int main()
{
    //data structure: 数据结构，class type：类类型
    Sales_item book;
    cin >> book;
    cout << book << endl;

    return 0;
}

