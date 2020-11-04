#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    //读取数量未知的sring
    unsigned index = 0;
    string word;
    while (cin >> word) {//空白(即空格符、换行符等)并不会读入，不进行循环体
        index++;
        cout << "index: " << index << ", word: " << word << endl;
    }
    cout << "total: " << index << endl;

    return 0;
}
