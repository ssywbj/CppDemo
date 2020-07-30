
#include <iostream>

using namespace std;

int main()
{
	cout <<"--------四个标准输入输出IO对象--------" << endl;
	cout << " cin: 标准输入，standard input，istream类型的对象;" << endl;
	cout << "cout: 标准输出，standard output，ostream类型对象;" << endl;
	cerr << "cerr: 标准错误，standard error，ostream类型对象;" << endl;
	clog << "clog: 用来输出程序运行时的一般性信息ostream类型对象." << endl;

	clog << "" << endl;
	
	clog <<"<<: 输出运算符，左侧的运算对象必须是一个ostream对象，右侧的运算对象是要打印的值，运算结果是其左侧对象." << endl;
	clog << "endl: 操纵符的特殊值，写入endl的效果是结束当前行并将与设备关联的缓冲区（buffer）中的内容刷到设备中。缓冲刷新操作可以保证到目前为止程序所产生的所有输出都真正写入到输出流中，而不是仅停留在内存中等待写入流。程序员在调试时添加打印语句应保证“一直”刷新流。否则，如果程序崩溃，输出可能还留在缓冲区中，从而导致关于程序崩溃位置的错误推断！" << endl;

	clog << "" << endl;

	clog << ">>: 输入运算符，与输出运算符类似，左侧接受是一个istream对象，接受另一个对象作为右侧运算对象。它从给定的istream读入数据，并存入给定对象中，运算结果也是左侧对象。" << endl;
}
