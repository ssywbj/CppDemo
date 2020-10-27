#include <iostream>
using namespace std;

int main()
{
        //类型别名(type alias)是一个名字，它是某种类型的同义词。
	//有两种方法可用于定义类型别名。传统的方法是使用关键字typedef:
	typedef double wages;//wages是double的同义词
	wages hourly = 2.34, weekly = 3.5;
	cout << "hourly: " << hourly << ", weekly: " << weekly << endl;
        typedef wages base, *basep;//base是double的同义词，basep是double*的同义词
        base hour = hourly;	
	basep week= &weekly;
	cout << "hour: " << hour << ", week: " << week << ", *week: " << *week <<endl;
        //新标准规定一种新的方法，使用别名声明(alias declaration)来定义类型的别名：
	using dbe = double;
	dbe d = hour;
	dbe** d2 = &week;
	cout << "d: " << d << ", d2: " << d2 << ", *d2: " << *d2 << ", **d2: " << **d2 <<endl;

	//C++11新标准引入auto类型说明符，用它能让编译器替我们去分析表达式所属的类型
	int val1 = 2, val2 = 3;
	auto item = val1 + val2;
	cout << "item: " << item << endl;
	double val3 = 5.2;
	item = val1 +val3;
	cout << "item: " << item << endl;
	auto item1 = val1 +val3;
	cout << "item1: " << item1 << endl;
	//使用auto也能在一条语句中声明多个变量，但语句中所有变量的初始基本数据类型
	//都必须一样，因为在一条声明语句中只能有一个基本数据类型。
	auto i = 0, *p = &i;//正确：i是整数，p是整型指针
	//auto sz = 0, pi = 3.14;//错误：sz和pi的类型不一样
	
	//C++11新标准引入decltype类型说明符，用它能从表达式的的类型推断出要定义的
	//变量的类型，但是不想用该表达式的值初始化变量。在此过程中，编译器分析表
	//达式并得到它的值，却不实际计算表达式的值。
	//decltype(f()) sum = x;//sum的类型就是函数f的返回类型
	//编译器并不实际调用函数f，而是使用当调用发生时f的返回值类型作为sum的类型。
	const int ci = 0, &cj = ci;
	decltype(ci) x = 44;//x的类型是const int
	decltype(cj) y = x;//y的类型是const int&，y绑定到x
	//decltype(cj) z;//错误：z是一个引用，必须初始化
	cout << "x: " << x << ", y: " << x << endl;
	//decltype((variable))(注意是双层括号)的结果永远是引用，而decltype(variable)
	//的结果只有当varible本身是一个引用才是引用。
	//decltype((val1)) dd;//错误：dd是int&，必须初始化
	decltype(val1) e;
	return 0;
}
