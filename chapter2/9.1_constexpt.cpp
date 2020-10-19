#include <iostream>
using namespace std;

int main()
{
	//常量表达式(const expression)是指值不会改变并且在编译过程就能得到
	//计算结果的表达式。显然，字面值属于常量表达式，用常量表达式初始化
	//的const对象也是常量表达式。
	const int max_files = 20;//max_files是常量表达式
	const int limit = max_files + 1;//limit是常量表达式
	int staff_size = 27;//staff_size不是常量表达式
        //const int sz = get_size();//sz不是常量表达式	
	//尽量staff_size的初始值是个字面值常量，但由于它的数据类型只是一个
	//普通的int而非const int，所以它属于常量表达式。另一方面，尽管sz本身
	//是一个常量，但它的具体值直到运行时才能取到，所以也不是常量表达式。

	//C++11新标准规定，允许将变量声明为constexpr类型以便由编译器来验证变量的
	//值是否是一个常量表达式。
	constexpr int mf = 20;//20是常量表达式
	constexpr int lim_mf = mf + 1;//mf + 1是常量表达式
	//constexpr int xz1 = size();//只有当size()是constexpr函数时才是正确的声明语句
	//新标准允许定义一种特殊的constexpr函数，这种函数应该足够简单以使在编译时就
	//可以得到计算结果，这样就能用constexpr函数去初始化constexpr变量了。
	
	//字面值类型：一些比较简单，值也显而易见、容易得到的类型。算法类型、引用和指针
	//都属于字面值类型，自定义类、IO库、string类等不属于字面值类型。
	//尽管指针和引用都能定义成constexpr，但它们的初始值却受到严格限制。一个constexpr
	//指针的初始值必须是nullptr或者0，或者是存储于某个固定地址中的对象。函数体内
	//定义的变量一般来说并非存放在固定地址中，因此constptr指针不能指向这样的变量。
	//但允许在函数定义一类有效范围超出函数本身的变量，这类变量和定义在函数体
	//之外的变量一样也有固定地址，因此constexpr能绑定和指向这样的变量。
	//需要明确的是，在constexpr声明中如果定义了一个指针，限定符constexpr仅对指针
	//有效，与指针所指的对象无关：
	const int *p = nullptr;//p是一个指向整型常量的指针
	constexpr int *q = nullptr;//q是一个指向整数的的常量指针
	return 0;
}
