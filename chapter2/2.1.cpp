
//https://baike.baidu.com/item/%E5%8F%96%E6%A8%A1%E8%BF%90%E7%AE%97/10739384?fr=aladdin
//取模运算（“Modulus Operation”）和取余运算（“Remainder Operation ”）两个概念有重叠的部分但又不完全一致。主要的区别在于对负整数进行除法运算时操作不同。取模主要是用于计算机术语中，取余则更多是数学概念。
//取余运算区别
//对于整型数a，b来说，取模运算或者求余运算的方法都是：
//1.求 整数商： c = [a/b];
//2.计算模或者余数： r = a - c*b.
//求模运算和求余运算在第一步不同: 取余运算在取c的值时，向0方向舍入(fix()函数)；而取模运算在计算c的值时，向负无穷方向舍入(floor()函数)。
//例如计算：-7 Mod 4
//那么：a = -7；b = 4；
//第一步：求整数商c，如进行求模运算c = -2（向负无穷方向舍入），求余c = -1（向0方向舍入）；
//第二步：计算模和余数的公式相同，但因c的值不同，求模时r = 1，求余时r = -3。
//归纳：当a和b符号一致时，求模运算和求余运算所得的c的值一致，因此结果一致。
//当符号不一致时，结果不一样。求模运算结果的符号和b一致，求余运算结果的符号和a一致。
//另外各个环境下%运算符的含义不同，比如c/c++，java为取余，而python则为取模。
//取模其实全称应该是取模数的余数，或取模余。

#include <iostream>

using namespace std;

int main()
{
    cout << "7 / 4 = " << 7 / 4 << endl;
    cout << "-7 / 4 = " << -7 / 4 << endl;
    cout << "7 / -4 = " << 7 / -4 << endl;
    cout << "-7 / -4 = " << -7 / -4 << endl;

    cout << "-----------------" << endl;

    cout << "7 % 4 = " << 7 % 4 << endl;
    cout << "-7 % 4 = " << -7 % 4 << endl;
    cout << "7 % -4 = " << 7 % -4 << endl;
    cout << "-7 % -4 = " << -7 % -4 << endl;

    cout << "-----------------" << endl;

    cout << "-2 % 65536 = " << -2 % 65536 << endl;

    return 0;
}