#ifndef SALES_DATA_H
#define SALES_DATA_H

//#include <string>
using namespace std;

struct SalesData {
	//std::string bookNo;
	string bookNo;
	unsigned units_sold;
	double revenve;
};

#endif

//#ifndef：当且仅当变量未定义时为真
//#ifdef：当且仅当变量已定义时为真
//#define：把变量设定为预处理变量
//#endif：预处理程序结束执行
