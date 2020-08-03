
#include <iostream> 
#include "data/Sales_item.h"

using namespace std;

int main()
{
    //两本相同编号(ISBN)的书相加，即对象相加：对象的成员对应相加的结果
    Sales_item item1, item2;
    cin >> item1 >> item2;
    cout << "items sum:" << item1 + item2 << endl;

    return 0;
}

