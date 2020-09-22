//C++的标识符(identifier)由字母、数字、下画线组成，其中必须以字母或下画线开头。
//用户自定义的标识符不能连续出现两个下画线，也不能以下画线紧连大写字母开头。
//此外，定义在函数体外的标识符不能以下画线开头。
//变量命名规范(不一一列举)
//1.标识符要能体现实际含义。
//2.如果标识符由多个单词组成，则单词间应有明显区分，如student_load或
//studentLoad，不有使用studentload。


#include <iostream>
using namespace std;

//该程序仅用于说明：函数内部不宜定义与全局变量同名的新变量
int reused = 42;

int main()
{
	int sum = 0;
	for(int i = 0;i < 10;i++){
		sum +=i;
	}
	cout << "sum = " << sum << endl;

	int unqiue = 0;//unqiue拥有块作用域
	cout << reused << ", " << unqiue << endl;
	int reused = 0;//新建局部变量reused，覆盖了全局变量reused
	cout << reused << ", " << unqiue << endl;
	//显示地访问全局变量reused
	cout << ::reused << ", " << unqiue << endl;
        //使用作用域操作符来覆盖默认的作用域规则，因为全局作用域本身并没有名字，
	//所以当作用域操作符的左侧为空时，向全局作用域发出请求获取作用域操作符
	//右侧名字对应的变量。
	
	sum = 0;	
	int j = 100;
	for(int j = 0;j<11;j++){
		sum += j;
	}
	cout << "j, sum = " << sum << ", j = "<< j << endl;

	return 0;
}
//作用域(scope)是程序的一部分，C++语言中大多数作用域都以花括号分隔。
//main：定义于花括号之外，它拥有全局作用域(global scope)，在整个程序范围内
//都可以使用。
//sum：定义于main函数所限定的作用域之内，它拥有块作用域(block scope)，从声
//明sum开始直到main函数结束为止都可以访问它。
//i：定义于for语句内，只有在for语句之内才可以访问它。
//作用域能彼此包含，被包含(或者说被嵌套)的作用域称为内层作用域(inner scope)，
//包含着别的作用域的作用域被称为外层作用域(outer scope).

