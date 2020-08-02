
#include <iostream>

using namespace std;

int main()
{
    cout << "统计每个值连续出现多少次，请开始输入：" << endl;
    //currVal：正在统计的数，val：用于保存输入的新值
    int currVal = 0, val = 0;
    if (cin >> currVal) { //初始化：接收第一个输入值
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

        //istream状态无效时，打印最后一次统计结果
        cout << currVal << " occurs "<< cnt << " times!" << endl;
    } else {
        cout << "初始化失败：输入了非整数或换行符，程序运行结束!" << endl;
    }

    return 0;
}



