#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    string str("some thing");
    if(str.begin() != str.end()){
        auto begin = str.begin();
        cout << "begin: " << *begin << endl;
        //cout << "begin: " << begin << endl;//错误，需要加*
        *begin = toupper(*begin);

        string::iterator end = str.end();
        cout << "end: " << *end << endl;
        cout << "previous end: " << *(--end) << endl;

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
    cout << "judge string object is empty or is not: " << (*it).empty() << endl;
    cout << "judge string object is empty or is not: " << it->empty() << endl;

    return 0;
}
