#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    //读取数量未知的sring
    unsigned count = 0;
    string word, append;
    while (cin >> word) {//空白(即空格符、换行符等)并不会读入，不进行循环体
        count++;
        append += word;//字符串累加
        cout << "count: " << count << ", word: " << word 
        << ", append: " << append << endl;
    }
    cout << "total: " << count << endl;

    //为了与C兼容及某些历史原因，C++语言中的字符串字面值并不是标准
    //库类型string的对象。切记，字符串字面值与string是不同的类型。

    //当把string对象和字符字面值及字符串字面值混在一条语句使用的
    //时候，必须确保每个加法运算符(+)的两侧的运算对象至少有一个
    //是string。
    string add = word + " Add";//正确
    //string s2 = "Hello " + "World";//错误："+"号两侧都是字符串字面值
    string s3 = word + ", Hello" + " World";//正确，等价于：
    //string temp = word +", Hello";//正确
    //string s3 = temp + " World";//正确

    //string s4 = "Hello " + "World, " + word;//错误，等价于：
    //string temp = "Hello " + "World, ";//错误：不能把字面值直接相加
    cout << "add: " << add << ", s3: " << s3 << endl;

    return 0;
}
