#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
//getline(cin, string)函数读取一整行，包括空白符也一块读取。

//size()函数的返回类型其实是string::size_type，它是string类中定义的
//一种配套类型之一。尽管我们不太清楚string::size_type类型的细节，但是
//有一点是肯定的：它是一个无符号类型的值而且能足够存放下任何string
//对象的大小。由于size()函数返回的一个无符号整数，因此在表达式中就不
//要使用有符号整数了，以避免混合使用无符号数和有符号数带来的问题。
    unsigned index = 0;
    string line;
    while (getline(cin, line)) {
        if(line.empty()){
            cout << "line string is null" << endl;
        } else {
            index++;
            cout << "line: " << line << ", len: " << line.size() << endl;
        }
    }
    cout << "total: " << index << endl;

    return 0;
}
