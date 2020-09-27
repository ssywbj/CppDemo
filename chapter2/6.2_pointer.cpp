#include <iostream>

using namespace std;

int main()
{
	//指向指针的指针：通过*的个数可以区分指针的级别。也就是说，**表示指向
	//指针的指针，***表示指向指针的指针的指针，以此类推:
	int val = 21;
	int *p = &val;//p指向一个int型的数
	int **pp  = &p;//pp指向一个int型的指针
	cout << "**pp: "<< **pp << ", *p: " << *p << endl;//解引用
	**pp = 23;//修改指针指向对象的值
	cout << "**pp: "<< **pp << ", *p: " << *p << endl;//解引用
	cout << "pp: "<< pp << ", p: " << p << endl;//直接打印指针的地址值
	
	//指向引用的指针：引用本身不是一个对象，因此不能定义指向引用的指针，
	//但指针是对象，所以存在对指针的引用：
	int i =42;
	int *p1;
	int *&r = p1;//r是一个对指针的引用
	r = &i;//通过取地址符&，将i的地址赋给r，也就是令p1指向i
	*r  = 43;//解引用r得到i，也就是p1指向的对象，并将它的值修改
	cout << "i: " << i << endl;
	//对一条比较复杂的指针或引用的声明语句时，从右向左阅读有助于弄清楚它
	//的真实含义，如*&r：离变量名最近的符号是&，说明r是一个引用，第二近
	//的是*，说明r引用的是一个指针。

	return 0;
}

