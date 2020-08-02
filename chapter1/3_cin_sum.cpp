
#include <iostream>

using namespace std;

int main()
{
	cout << "请输入数量不定的整数：" <<endl;

	int var = 0, sum = 0;
	while(cin >> var){ //使用变量var保存用户输入的每一个数
		sum += var;
	}

	cout << "Sum is " << sum <<endl;

    return 0;

    //当使用istream对象作为条件时，其效果是检测流的状态。如果流是有效的，即
    //流未遇到错误，那么检测成功；如果遇到文件结束符（end-of-file）或无效的
    //输出时（例如读入的值不是一个整数），istream对象的状态会变为无效。处于
    //无效状态的istream对象会使条件变为假，以至于让程序跳出while循环。
    
    //Windows系统中输入文件结束符方法：先按住Crtl+Z，再按Enter或Return键
    //Unix系统，包括Mac OS X 系统中输入文件结束符方法：Crtl+D
    
    //错误的传递效应：一个错误就会导致编译器在其后报告比实际数量多得多的错误
    //信息。所以在每修正一个错误或者多个明显的错误后就要重新编译程序，这就是
    //所谓的“编辑－编译－调试”（edit-compile-debug）周期。
}

