#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    //标准类型vector表示对象的集合，因为容纳着其它对象，因此
    //它也被称为容器(container)。C++语言有类模板(class template)，
    //也有函数模板，vector是一个类模板。
    //模板本身不是类或函数，相反可以将模板看作编译器生成类或函数
    //编写的一份说明。编译器根据模板创建类或函数的过程被称为被实例
    //化(instantiation)，当使用模板时需要指出编译器应把类或函数实例
    //化成何种类型。

    //vector的初始化除与string类似，还有"{}"列表初始化方式
    vector<string> v1 = {"a", "an", "the"};
    vector<string> v2{"a", "an", "the"};//等价于v1={a, b, c, ...}
    vector<int> vTmp(10, 2);//10个int类型的元素，每个都被初始化为2

    //只提供vector对象容纳的元素数量
    vector<int> iTmp(10);//10个元素，每个都初始化为0
    vector<string> sTmp(10);//10个元素，每个都是空string对象

    //初始化时用"()"表示元素数量，"{}"表示列表初始值，如：(和上面对比)
    vector<int> vTmp2{10, 2};//两个int类型的元素，分别是10和2
    vector<int> vTmp3{10};//一个int类型的元素：10

    //但如果初始化时使用了"{}"的形式而提供的值又不能用来列表初始化时，
    //就要考虑用这样的值来构造vector对象了(等价使用"()"的形式)，如：
    vector<string> sTmp2{10};//有10个默认初始化的元素
    vector<string> sTmp3{10, "Hi"};//有10个值为"Hi"的元素

    return 0;
}
