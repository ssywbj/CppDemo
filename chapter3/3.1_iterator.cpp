#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    //所有标准库容器都可以使用迭代器，但是只有少数几种才同时
    //支持下标运算符，如vector和string。严格来说，string对象
    //并不属于容器类型，但是string支持很多与容器类类似的操作
    string str("some thing");
    //如果容器为空，则begin()和end()返回的是同一个迭代器
    if(str.begin() != str.end()){
        auto begin = str.begin();//begin()返回指向容器第一个元素的迭代器
        cout << "begin: " << *begin << endl;
        //cout << "begin: " << begin << endl;//错误，需要加*
        *begin = toupper(*begin);//*begin：返回迭代器所指元素的引用

        //end()返回容器“尾元素的下一位置”的迭代，也就是说该迭代器指示的容器
        //是一个不存在的“尾后(off the end)”元素。这样的迭代器没有什么实际含
        //义，仅是个标记而已，表示已经处理完了容器中的所有元素，这样的迭代器
        //常被称为尾后迭代器(off-the-end iterator)或者尾迭代器(end iterator)。
        string::iterator end = str.end();//string::iterator：string迭代器类型
        cout << "end: " << *end << endl;
        cout << "previous end: " << *(--end) << endl;//--end：指示容器中的上一个元素
        //string的迭代器类型：string::iterator表示能读写其中的元素，
        //string::const_iterator表示只能读字符不能写字符。类似的vector<int>的
       //迭代器类型有vector<int>::iterator和vector<int>::const_iterator
        string::const_iterator iter = str.begin();
        cout << "iter: " << *iter << endl;
        //*iter = tolower(*iter);
    }
    cout << str << endl;

    //依次处理字符直到处理完全部字符或遇到空白符
    for(auto ch = str.begin();ch != str.end() && !isspace(*ch);ch++){
        *ch = toupper(*ch);
    }
    cout << str << endl;

    string v;
    bool b = v.empty();
    cout << "b: " << b << ", bool: " << v.empty() << "---" << (v.begin() == v.end()) << endl;

    vector<string> vStr(10, "H");
    vector<string>::iterator it = vStr.begin();
    cout << "judge string object is empty or is not: " << (*it).empty() << endl;//先解引用，再调用成员函数
    cout << "judge string object is empty or is not: " << it->empty() << endl;//等价于(*it).empty()

    return 0;
}
