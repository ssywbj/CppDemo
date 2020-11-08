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
    //vector<string> v1 = {"a", "an", "the"};
    //vector<string> v2{"a", "an", "the"};
    //vector<int> v11 = {1, 2, 3};
    vector<int> vTmp(10,2);

    return 0;
}
