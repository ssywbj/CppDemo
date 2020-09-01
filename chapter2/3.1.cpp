
#include <iostream>

using namespace std;

int main()
{
    //以0开头的整数代表八进制，以0x或0X开头的代表十六进制
    //默认情况下，十进制字面值是带符号数，八进制和十六进制字面值既可能是带
    //符号的也可能是无符号的。
    int i1 = 20, i2 = 024, i3 = 0x14, i4 = 0X14;
    cout << "i1: " << i1 << ", i2: " << i2 << ", i3: " << i3 << ", i4: " << i4 << endl;

    //浮点型字面值表现为一个小数或以科学计数法表示的指数，其中指数部分用
    //E或e来标识，浮点型字面值默认为double型。
    cout << 3.14159 << ", " << 3.14159E3 << ", " << 0. << ", " << 0e0 << ", " << .001 << ", " << 1.4e4 << endl;

    //单引号：char型(字符)字面值，双引号：字符串字面值
    //字符串字面值的类型实际上是由常量字符构成的数组(array)。编译器在每个字
    //符串的结尾处添加一个空字符('\0')，因此字符串字面值的实际长度要比它的
    //内容多1。如字符串"A"就代表了一个字符的数组，该数组包含两个字符：一个
    //是字母A，另一个是空字符。
    cout << 'a' << ", " << "A" << endl;

    //转义序列
    //有两类字符程序员不能直接使用：一类是不可打印(nonprintable)的字符，如
    //退格或其他控制字符，因为它们没有可视的图符；另一类是在C++语言中有特
    //殊含义的字符(单引号、双引号、问号、反斜线)。在这些情况下需要用到转
    //义序列(escape sequence)，转义序列均以反斜线开始，如:
    cout << "Hi\n" << '\'' << '\n' << '\"' << "\n" << '\b' << 
        '\n' << '\r' << '\?' << "\n" << "\?" << endl;
    //泛化的转义序列：\x后紧跟1个或多个十六进制数字，或者\后紧跟1个、2个或3
    //个八进制数字，其中数字部分表示的是字符对应的数值，如
    cout << "-----------------------------------" << endl;
    cout << '\x4d' << '\115' << '\12' << "\x30" << endl;//参照ASCII码
    //如果反斜线\后面跟着的八进制数字超过3个，只有前面3个与\构成转义序列，
    //如"\1234"表示两个字符，即八进制数123对应的字符以及字符4。而\x要用到后
    //面跟着的所有数字，例如"\x1234"表示一个16位的字符，该字符由这4个十
    //六进制数所对应的比特唯一确定。
    //char32_t ch = 0x6211;
    //cout << "\1234" << ", ch: " << ch << endl;
    cout << "\1234" << endl;
    
    return 0;
}
