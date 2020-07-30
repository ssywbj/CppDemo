
#include <iostream>

using namespace std;

int main()
{

    int currVal = 0, val = 0;
    if (cin >> currVal) { //接收第一个输入值
        int cnt = 1;
        while (cin >>val){
            if (currVal == val){
                cnt++;
            } else {
                cout << currVal << " occurs "<< cnt << " times." << endl;
                currVal = val;
                cnt = 1;
            }

        }

        cout << currVal << " occurs "<< cnt << " times." << endl;
    } else {
        cout << "程序运行结束：输入了非整数或换行符" << endl;
    }

    return 0;
}



