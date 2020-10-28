#include <iostream>
using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};//自定义数据结构方式一：变量名和类体分开。推荐这种方式

struct Sales {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
} data1, data2;//自定义数据结构方式二：变量名和类体不分开

int main()
{
	Sales_data accum, trans, *salesptr = &trans;
	Sales data3, *pdata3 = &data3;
	return 0;
}

