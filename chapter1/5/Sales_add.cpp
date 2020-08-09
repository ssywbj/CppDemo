
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
//"."：点运算符，它只能用于类类型的对象，其左侧运算对象必须是一个类类型
//的对象，右侧运算对象必须是该类型的一个成员名，运算结果为右侧运算对象
//指定的成员。

//"()"：调用运算符，使用调用运算符来调用一个函数，里面放置的
//是实参(argument)列表(可能为空)

