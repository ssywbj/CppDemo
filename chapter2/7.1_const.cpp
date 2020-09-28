#include <iostream>

using namespace std;

int main()
{
	//使用const定义的变量是一个常量，const对象一旦创建后其值就不能改变，
        //所以const对象必须初始化。默认状态下，const对象仅在文件内有效，但如
        //果想在多个文件之间共享const变量，必须在变量的定义之前添加extern
        //关键字。多文件间共享：只在一个文件中定义const变量，在其它多个文
        //件中声明并使用它。如：
        //file_1.cpp定义并初始一个常量，该常量能被其它文件访问
        //extern const int bufSize = fcn();
        //file_1.h头文件
        //extern const int bufSize;//与file_1.cpp中定义的bufSize是同一个

	//把引用绑定到const对象上，可以称之为对常量的引用(refenerce to const),
	//简称常量引用。与普通引用不同的是对常量的引用不能被用作修改它所绑定
	//的对象。
	const int ci = 1024;
	const int &r1 = ci;
	//r1 = 42;//错误：引用及绑定的对象都是常量
	//int &r2 = ci;//错误：试图让非常量引用指向一个常量对象。因为不允许
	//直接为ci赋值，当然也不能试图通过引用去改变ci。
	

	return 0;
}
