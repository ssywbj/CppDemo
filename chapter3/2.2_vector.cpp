#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> arr;
    for(unsigned index = 0;index < 10;index++){
        arr.push_back(index * 2);
    }
    
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
