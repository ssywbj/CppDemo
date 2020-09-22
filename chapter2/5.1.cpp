//复合类型(compound type)是指基于其他类型定义的类型。引用和指针就是其中两种
//复合类型。

//引用(reference)：为对象起另外一个名字，引用类型引用(refers to)另外一种类型。
//通过将声明写成&d的形式来定义引用类型，其中d就是声明的变量名。

#include <iostream>

using namespace std;

int main()
{
	int val = 1024;
	int &refVal = val;
	cout << "val: " << val << ", refVal: " << refVal << endl; 
	
	//定义引用时，程序把引用和它的初始值绑定(bind)在一起，而不是将初始值拷
	//贝给引用。一旦初始化完成，引用将和它的对象一直绑定在一起。因为无法令
	//引用重新绑定另外一个对象，因此引用必须初始化。
	//定义一个引用之后，对其进行的所有操作都是在与之绑定的对象上进行。
	//引用本身不是对象，所以不能定义引用的引用。

        //int &refVal2;//报错：引用必须被初始化

	refVal = 99;
	cout << "val: " << val << ", refVal: " << refVal << endl; 

	refVal = 101;
	int j = val;
	cout << "j: " << j << ", refVal: " << refVal << endl; 

	double d = 0 , &r2 = d;
	r2 = refVal;
	cout << "d: " << d << ", r2: " << r2 << endl; 

	//引用只能绑定在对象是，不能与字面值或某个表达式的计算结果绑定在
        //一起。
        //除两种情况例外(后有介绍)，引用的类型都要和与之绑定的对象严格匹配。
        //int &jj = 10;
        //double dval = 3.14;
        //int &refDval = dval;
	return 0;
}

