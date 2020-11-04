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
	string s;
	cin >> s;
	cout << "s: " << s << endl;

	return 0;
}
