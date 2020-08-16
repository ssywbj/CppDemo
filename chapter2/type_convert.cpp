//类型转换

#include <iostream>

using namespace std;

int main()
{
    bool b = 42;
    int i =b;
    int j = 3.14;
    double pi = j;
    unsigned char c = -1;
    signed char c2 = 256;
    cout << "b: " << b << ", i: " << i << ", j: " << j << ", pi: " << pi << ", c: " << c << ", c2:" << c2 <<endl;

    return 0;
}
