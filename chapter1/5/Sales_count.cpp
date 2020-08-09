
#include <iostream> 
#include "data/Sales_item.h"

using namespace std;

int main()
{
    Sales_item count;
    if(cin >> count){
        Sales_item current;
        while (cin >> current){
            if (count.isbn() == current.isbn()){
                count += current;
            } else {
                cout << "total sales: " << count << endl;
                count = current;
            }
        }

        cout << "total sales: " << count << endl;
    } else {
        cerr << "No data?!" << endl;
    }

    return 0;
}    

