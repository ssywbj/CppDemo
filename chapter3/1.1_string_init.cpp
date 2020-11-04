#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	//初始化string对象的方式：使用等号(=)执行的是拷贝操作，编译器
	//把等号右侧的初始值拷贝到新创建的对象中去。如果不使用等号，
	//则执行的是直接初始化。
	string s1;
	string s2(s1);//s2是s1的副本
	string s3 = "adb";//等价于s3("adb")
	string s4(10, 'w');//10个w，注意是字符'w'，而不是字符串"w"
	string s5 = s3;//等价于s5(s3)
	string s6("value");//s6是字面值"value"的副本，除了最后的那个空字符外
	cout << "s1: " << s1 << ", s2: " << s2 << ", s3: "
	       <<s3 << ", s4: " << s4 << ", s5: "
	      << s5 << ", s6:" << s6 << endl;

	return 0;
}
