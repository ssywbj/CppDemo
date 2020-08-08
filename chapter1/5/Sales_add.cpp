
#include <iostream> 
#include "data/Sales_item.h"

using namespace std;

int main()
{
    //两本相同编号(ISBN)的书相加，即对象相加：对象的成员对应相加，结果是一个新对象
    Sales_item item1, item2;
    cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn()){
        cout << "items sum:" << item1 + item2 << endl;
        return 0;
    } else {
        cout << "Data must refer to same ISBN" << endl;
        return -1;
    }
}

