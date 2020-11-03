#include <iostream>
#include "SalesData.h"

//使用命名空间的另一种方法
//using namespace::name;
//每个using声明引入命名空间中的一个成员，这是使用命名空间最安全的方法。好
//处有两个：一是可以减少注入到命名空间中的名字数量，二是using声明引起的二
//义性问题在声明处就能发现，无须等到使用名字的地方，这对检测并修改错误有
//很大的益处。
using std::cin;
using std::cout;
using std::endl;

int main()
{
	SalesData data1, data2;
	double price = 0;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenve = data1.units_sold * price;
	cout << "no: "<< data1.bookNo << ", sold: " << data1.units_sold << ", revenve: " << data1.revenve << endl;

	return 0;
}
