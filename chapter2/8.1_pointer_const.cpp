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
	const double dpi = 3.14159;
	const double *const pip = &dpi;//pip是一个指向常量对象的常量指针
	//从右向左阅读pip的含义：const说明它是一个常量，*说明它是一个指针，
	//double说明它是一个双精度类型，最左侧的const说明它是一个指向
	//常量的对象。所以pip是一个指向常量对象的常量指针
	
	//注：指向常量的指针和常量指针不是一个概念。
	//用名词顶层const(top-level const)表示指针本身是个常量，
	//用名词底层const(low-level const)表示指针所指的对象是一个常量。
	//更一般的，顶层const可以表示任意的对象是常量，底层const则与指针和引用
	//等复合类型的基本类型有关。
	int i = 0;
	int *const p1 = &i;//不能改变p1的值，这是一个顶层const
	const int ci = 43;//不能改变ci的值，这是一个顶层const
	const int *p2 = &ci;//能改变p2的值，这是一个底层const
	const int *const p3 = p2;//靠右的const是顶层const，靠左的是底层const
	const int &r = ci;//用于声明引用的const都是底层const
        //当执行拷贝操作时，常量是顶层const还是底层const区别明显，其中顶层
	//const不受什么影响，而底层const的限制却不能忽视：拷入和拷出的对象
	//必须具有相同的底层const资格，或者两个对象的数据类型必须能够转换，
	//一般来说，非常量可以转换成常量，反之则不行。
	//顶层const拷贝
	i = ci;//正确：拷贝ci的值，ci是一个顶层const，对此操作影响
	p2 = p3;//正确：p2和p3指向的对象类型相同，p3顶层const的部分不影响
        //底层const拷贝
	//int *p = p3;//错误：p3包含底层const的定义，而p没有
	const int *pp3 = p3;//正确：pp3是底层const
	p2 = p3;//正确：p2和p3都是底层const
	p2 = &i;//正确：int*能转换成const int*
	//int &r1 = ci;//错误：普通的int&不能绑定到int常量上
	const int &r2 = i;//正确：const int&可以绑定到一个普通int上

	return 0;
}

