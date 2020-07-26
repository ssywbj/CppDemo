
#include <iostream>
using namespace std;

int main()
{
	cout<<"Program Enter: main() method."<<endl;

	return 0;//主函数默认返回０。在大多数系统中，main的返回值被用来指示状态：０表示成功，非０的含义由系统定义，通常用来指出错误类型。
	//return 1;//但就算不写返回语句也是返回０，不会报错
	
	/*
	 *编译命令 CC
	 *$ CC prog1.cpp
	 *编译器会生成一个可执行文件：Windows系统是prog1.exe，Unix系统通常是a.out
	 *
	 *执行命令
	 *Windows可忽略扩展名.exe:
	 * $ prog1
	 *若某些版本的系统需要提供文件路径，即使文件就在当前目录或文件中也要显式指出文件的位置，此时我们可键入：
	 * $ .\prog1
	 *“.”后跟反斜线“\”来明确指出文件在当前目录中
	 *Unix不可忽略扩展名：
	 * $ a.out
	 *若需要提供文件路径，则需显式指出文件路径，如若在当前目录下：
	 * $ ./a.out
	 *“.”后跟斜线“/”来明确指出文件在当前目录中
	 *
	 *查看main方法返回值 echo
	 *在Unix和Windows系统中执行完一个程序后，都可以通过echo命令获得其返回值，
	 *Unix系统中：
	 * $ echo $?
	 *Windows系统中：
	 * $ echo %ERRORLEVEL%
	 *
	 *GNU编译器
	 *g++ -o prog1 prog.cpp
	 */
}
