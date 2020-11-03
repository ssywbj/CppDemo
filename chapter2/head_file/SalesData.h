#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
//using namespace std;//一般来说位于头文件的代码不应该使用using声明。因为头
//文件的内容会拷贝到所有引用它的头文件中，如果头文件里有某个using声明，那么
//每个使用该头文件的文件就都会有这个声明。对于某些程序来说，由于不经意间包
//含了一些名字，反而可能产生始料未及的名字冲突。

struct SalesData {
	std::string bookNo;
	//string bookNo;
	unsigned units_sold;
	double revenve;
};

#endif

//#ifndef：当且仅当变量未定义时为真
//#ifdef：当且仅当变量已定义时为真
//#define：把变量设定为预处理变量
//#endif：预处理程序结束执行
