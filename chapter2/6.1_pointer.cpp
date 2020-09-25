//指针(pointer)是“指向(point to)”另外一种类型的复合类型。与引用类似，指针也实现
//了对其它对象的间接访问。然而指针与引用相比又有很多不同点。其一，指针本身就是
//一个对象，允许对指针赋值和拷贝，而且在指针的生命周期内它可以先后指向几个不同
//的对象。其二，指针无须在定义时赋初值。和其它内置类型一样，在块作用域定义的指
//针如果没有被初始化，也将拥有一个不确定的值。

#include <iostream>

using namespace std;

int main()
{
	int *ip1, *ip2;//ip1和ip2都是指向int类型对象的指针
	double dp, *dp2;//dp2是指向double型对象的指针，dp是double对象

	//指针存放的是某个对象的地址，要想获取该地址，需要使用取地址符(&)
	int ival = 42;
	//定义p为一个指定int类型的指针，随后初始化p令其指向名为ival的int对象。
	int *p = &ival;
	//因为引用不是对象，没有实际地址，所以不能定义指向引用的指针。
	
	//同引用一样，除两种情况例外(后有介绍)，所有指针的类型都要和它所指向
	//的对象严格匹配。
	
	//指针值，指针的值(即地址)应属下列4种状态之一：
	//1.指向一个对象；2.指向紧邻对象所占空间的下一个位置；
	//3.空指针，意味着指针没有指向任何对象；
	//4.无效指针，也就是上述情况之外的其他值。
	
	//如果指针指向了一个对象，则允许使用解引用符(操作符*)来访问该对象
	cout << "p: " << *p << endl;//由符号*得到指针p所指的对象，输出对应值
	//对指针解引用会得出所指的对象，因此如果给解引用的结果赋值，实际上也
        //就是给指针所指的对象赋值
        *p = 11;
        cout << "ival: " << ival << endl;
        //注意：解引用操作仅适用于那些确实指向了某个对象的有效指针。
	
	//空指针(null pointer)不指向任何对象，在试图使用一个指针之前代码可以
	//首先检查它是否为空。
	//以下是几个生成空指针的方法：	
	int *p1 = nullptr;//等价于int *p1 = 0;C++新标准引入的一种方法
	int *p2 = 0;//直接将p2初始为字面常量0
	int *p3 = NULL;//等价于int *p3 = 0;
	//直接打印指针，输出的是指向的对象的地址；空指针输出的结果为0
        cout << "p: " << p << endl;
	cout << "p1: " << p1 << ", p2: " << p2 << ", p3: " << p3 << endl;
        //nullptr是一种特殊类型的字面值，它可以被转换成任意其它的指针类型，
	//在新标准下，最好使用这种方法定义空指针。
	
	//NULL是定义在头文件cstdlib中的预处理变量，它的值就是0。预处理变量不
	//属于命令空间std，它由预处理器负责管理，因此可以直接使用预处理变量
	//而无须在前面加上std::。当用到一个预处理变量时，预处理器会自动地将
	//它替换为实际值，因此用NULL初始化指针和用0是一样的。
	
	//建议：初始化所有指针，并且在可能的情况下，尽量等定义了对象之后再
	//定义指向它的指针。如果实在不清楚指针应该指向何处，就把它初始化为
	//0或nullptr，这样程序就能检测并知道它没有指向任何具体对象了。

	p3 = p;//指针对指针赋值。改变p3的值，此时p3和p指向同一个对象
	*p3 = 17;
        cout << "p: " << p << ", p3: " << p3 << ", ival: " << ival << endl;

	//只要指针拥有一个合法值，就能将它用在条件表达中。和采用算术表达式
	//遵循的规则类似，如果指针的值是0，条件取false，非0的条件值都是true。
	if (!p2) {
		cout << "p2 is null pointer" << endl;
	}
	if (p3){
		cout << "p3 is not null pointer" << endl;
	}
	int *pp = 0;
	if (pp) {//用if(pointer)判断指针是否指向了一个合法的对象
		cout << "pp is vaild pointer" << endl;
	} else {
		cout << "pp is invaild pointer" << endl;
	}
	pp = &ival;
	if (pp) {
		cout << "pp is vaild pointer" << endl;
	} else {
		cout << "pp is invaild pointer" << endl;
	}
	//对于两个类型相同的合法指针，可以用“==”或“!=”来比较它们，比较的结果
	//是布尔类型。如果两个指针存放的地址值相同，则它们相等；反之它们不
	//相等。两个指针相等有三种可能：它们都为空、都指向同一个对象，或者都
	//指向同一个对象的下一个地址。需要注意的是，一个指针指向某对象，另一个
	//指针指向另外对象的下一地址，也有可能出现指针相等的情况。

	//void*指针
	//void*是一种特殊的指针类型，可用于存放任意对象的地址，但对该地址到底是
	//个什么类型的对象并不了解
	double obj = 3.14, *pd = &obj;
	void *pv = &obj;
	cout << "pv: " << pv << ", pd:" << pd << ", *pd: " << *pd << endl;
	//cout<<"*pv: "<< *pv << endl;//错误：不能直接操作void*指针所指的对象
	int ii = 6, *pii = &ii;
	pv = pii;
	cout << "pv: " << pv << ", pii:" << pii << endl;
	//void*指针能做的事儿比较有限：拿它和别的指针比较、作为函数的输入输出、
	//或者给另外一个void*指针赋值。不能直接操作void*指针所指的对象，因为
	//我们并不知道这个对象是什么类型，也就无法确定能在这个对象上做哪些操作。
	
	int* p4 = &ival;//也可以这么定义指针，但容易产生误导，如
	int* p5, p6;//p5是int指针，p6是int
	return 0;
}
