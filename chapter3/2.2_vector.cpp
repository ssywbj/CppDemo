#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::to_string;

#define random(a,b) (rand()%(b-a)+a)

int main()
{
    vector<int> arr;
    for(unsigned index = 0;index < 10;index++){
        arr.push_back(index * 2);
    }
    //如果循环体内部包含有向vector对象添加元素的语句时，
    //则不能使用范围for循环。范围for语句不应改变其所
    //遍历序列的大小。

    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;

    vector<string> sVet;
    for(unsigned i = 0;i < 5;i++){
        sVet.push_back(to_string(i * i));//向集合中添加元素，加在末尾
    }
    for(string s: sVet){
        cout << s << " ";
    }
    cout << endl;

    //sVet.size()的类型是vector<string>::size_type，而不是vector::size_type
    const vector<string>::size_type len = sVet.size();
    cout << "len is " << len << endl;
   
    //https://www.jianshu.com/p/3acc8b3c41ca
    srand((int)time(NULL));
    for(int i = 0; i < 10;i++){
        cout << rand() << ' ';
    }
    cout << endl;

    decltype(sVet.size()) index = 0;
    for(int i = 0;i < 5;i++){
        index = random(0, len); 
        cout << "sVet[" << index << "]: " << sVet[index] << endl ;
    }

    return 0;
}
