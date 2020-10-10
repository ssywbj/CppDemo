#include <iostream>
using namespace std;

int main()
{
	//与引用一样，也可以令指针指向常量或非常量。类似于常量引用，指向常量的
	//指针(pointer to const)不能用于改变其所指对象的值。要想存放常量对象的
	//地址，只能使用指向常量的指针。
	const double pi = 3.14;//pi是个常量，它的值不能改变
	//double *prt = &pi;//错误：存放常量对象的地址，只能使用指向常量的指针
	const double *cptr = &pi;//正确:用const定义指向常量的指针
	cout << "cptr: " << cptr << endl;
	//*cptr = 32;//错误：指向常量的指针不能改变其所指对象的值
	double dval = 3.14;
	cptr = &dval;//改变cptr的值，允许指向常量的指针指向非常量对象
	//*cptr = 2.0;//错误：指向常量的指针不能改变其所指对象的值
	cout << "cptr: " << cptr <<", dval: " << dval << endl;

	//因为指针是对象，因此可以像其它对象类型一样，允许把指针本身定为常量。
	//常量指针(const pointer)必须初始化，而且一旦初始化完成，则它的值(也
	//就是存放在指针中的那个地址)就不能改变了。把*放在const关键字之前用以
	//说明指针是一个常量，这样的书写形式隐含着一层意味，即不变的是指针而
	//非指向的那个值。
	int errNumb = 0;
	int *const curErr = &errNumb;//*const声明, curErr将一直指向errNumb
	const double pi = 3.14159;
	const double *const pip = &pi;//pip是一个指向常量对象的常量指针
	//从右向左阅读pip的含义：const说明它是一个常量，*说明它是一个指针，
	//double说明它是一个双精度类型，最左侧的const说明它是一个指向
	//常量的对象。所以pip是一个指向常量对象的常量指针
	
	//注：指向常量的指针和常量指针不是一个概念。用名词顶层const(top-level
	// const)表示指针本身是个常量，而用名词底层const(low-level const)表示
	//指针所指的对象是一个常量。
	
	return 0;
}

