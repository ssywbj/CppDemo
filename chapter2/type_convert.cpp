//类型转换

#include <iostream>

using namespace std;

int main()
{
    bool b = 42;//非布尔类型的算术值赋给布尔类型时，初始值为0则结果为false，否则结果为true。
    bool b2 = 0, b3 = -1, b4 = 3.14;
    cout << "b: " << b << ", b2: " << b2 << ", b3: " << b3 << ", b4: " << b4 <<endl;
    unsigned len = 0;
    if(len) {
        cout << "len is " << len << endl;
    } else {
        clog << "len is 0!" << endl;
    }

    int i = b;//布尔值赋给非布尔类型时，初始值为false则结果为0，初始值为true则结果为1。
    int j = 3.14;//浮点数赋给整数类型时，进行了近似处理。结果值将仅保留浮点数中小数点之前的部分。
    double pi = j;

    unsigned short c = -2;//赋给无符号类型一个超出它表示范围的值时，结果是初始值对无符号类型表示数值总数取模后的余数，如若short类型占16位，则它能表示的数值总数为2^16=65536, 此时-2 mod 65536的计算过程如下：
    //公式：c = a/b, r = a - cb，其中a = -2，b = 65536, r为结果。
    //数学算术运算：-2/65536 = -0.00003052
    //求模:c向负无穷方向舍入，所以c=-1, r=-2-(-1)*65536=65534(r与b符号相同)
    //求余:c向0方向舍入，所以c=0，r=-2-0*65536=-2(r与a符号相同)

    signed char c2 = 256;//赋给带符号类型一个超出它表示范围的值时，结果是未定义的(undefined)。此时程序可能继续工作、可能崩溃，也可能生成垃圾数据。
    cout << "i: " << i << ", j: " << j << ", pi: " << pi << ", c: " << c << ", c2:" << c2 <<endl;

    cout << "---------------------------------" << endl;

    unsigned u = 10;
    int i2 = -42;
    cout << "i2 + i2 = " << i2 + i2 << endl;
    cout << "u + i2 = " << u + i2 << endl;

    unsigned u2 = 42, u3 = 10;
    cout << "u2 - u3 = " << u2 - u3 << endl;
    cout << "u3 - u2 = " << u3 - u2 << endl;
    return 0;
}
