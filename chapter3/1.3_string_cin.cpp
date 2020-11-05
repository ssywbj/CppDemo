#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    //忽略开头的空白(即空格符、换行符、制表符等)并
    //从第一个真正的字符开始，直到遇见下一处空白为止。
    string s1, s2;
    cin >> s1 >> s2;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    //比较规则
    //1.如果所含的字符完全一样，则它们相等；
    //2.如果长度不同而且较短string对象的每个字符与较长string对象对应
    //位置上的字符相同，则较短的对象小于较长的对象；
    //3.对应位置上第一个相异的字符按ASCII码的大小比较。
    if(s1 == s2){
        cout << s1 << " equals " << s2 << endl;
    } else {
        if(s1 < s2){
            cout <<"\"" << s1 << "\"" << " smaller than " << "\"" << s2 << "\""<< endl;
        } else {
            cout <<"\"" << s1 << "\"" << " bigger than " << "\"" << s2 << "\""<< endl;
        }
    }

    return 0;
}
