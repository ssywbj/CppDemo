//事实上在C++语言中，初始化和赋值是两个完全不同的操作。然而在很多编程语言中
//二者的区别几乎可以忽略不计，即使在C++语言中有时这各区别也无关紧要，所以特
//别容易把二者混为一谈。注意：
//初始化不是赋值，初始化的含义是创建变量时赋予其一个初始值，而赋值的含义是
//把对象的当前值探险，而以一个新值来替代。

#include <iostream>
using namespace std;

int main()
{
    //定义变量并初始化的四种方法
    int i = 0;
    int i2 = {1};//用花括号来初始化变量是C++的新标准之一，被称为列表初始化
    //int i3{2};//有些系统的编译器不支持这种初始化方式？
    int i4(3);
    //cout << i << ", " << i2 << ", " << i3 << ", " << i4 << endl;
    cout << i << ", " << i2 << ", " << i4 << endl;

    //当用于内置类型的变量时，列表初始化的形式有一个重要特点：如果初始值存在
    //丢失信息的风险，则编译器将报错或警告，如：
    double ld = 3.1415926536;
    //int a{ld}, b = {ld};//出现警告或错误
    int c(ld), d = ld;//未出现任何警告或错误，且确实丢失精度
    //cout << a << ", " << b << ", " << c << ", " << d << endl;
    cout << c << ", " << d << endl;

    //默认初始化
    //如果定义变量时没有指定初值，则变量被默认初始化(default initialized),
    //此时变量被赋予了“默认值”。默认值到底是什么类型由变量类型决定，同时定
    //义变量的位置也会对此有影响。如一种例外是，定义在函数体内的内置类型
    //变量将不被初始化(uninitialized)。一个未被初始化的内置类型变量的值是
    //未定义的，如果试图拷贝或民其他形式访问此类值将引发错误。
    //绝大多数类都支持无须显式初始化而定义对象，这样的类提供了一个合适的默认
    //值。一些类要求每个对象都显式初始化，此时如果创建了一个该类的对象而未
    //对其做明确的初始化操作，将引发错误。
    
    //变量声明和定义的关系
    //分离式编译(separate compilation):允许将程序分割为若干个文件，每个文件
    //可被独立编译。
    //声明：使名字为程序所知，一个文件如果想使用别处定义的名字则必须包含对
    //那个名字的声明。
    //定义：负责创建与名字关联的实体。
    //如果想声明一个变量而非定义它，就在变量名前添加关键字extern，而且不要
    //显式地初始化变量：

    return 0;
}
