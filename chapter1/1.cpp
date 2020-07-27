
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
	 *编译器会生成可执行文件：Windows系统是prog1.exe，Unix系统通常是a.out
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
	 *常用的C++编译器：GNU编译器和微软Visual Studio编译器 
	 *GNU编译器
	 *运行GNU编译器的命令是g++:
	 * $ g++ -o prog1 prog.cpp
	 *其中-o prog1是编译参数，指定了可执行文件的文件名。在不同的操作系统中，
	 *此命令会生成一个名为prog1或prog1.exe的可执行文件。在Unix系统中，可
	 *执行文件没有后缀；在Windows系统中，后缀为.exe。如果省略了-o prog1
	 *参数，在Unix系统中编译器会生成一个名为a.out的可执行文件，在Windows系统
	 *中则会生成一个名为a.exe的可执行文件（注意：根据使用的GNU编译器的版本,
	 *可能需要指定-std=c++0x参数来打开对C++的支持）。
	 *命令常用选项：
	 *-w:关闭编译时的警告，也就是编译后不显示任何warning，因为有时在编译之后
	 *编译器会显示一些例如数据转换之类的警告，这些警告是可以忽略的；
	 *-Wall:编译后显示所有警告；
	 *-W:类似-Wall，会显示警告，但是只显示编译器认为会出现错误的警告；
	 *良好的编译习惯是把-W和-Wall都尽量带上，如
	 * $ g++ -W -Wall -o prog1 prog.cpp
	 */
}
