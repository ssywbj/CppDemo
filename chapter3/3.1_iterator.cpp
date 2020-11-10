#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string str("some thing");
    if(str.begin() != str.end()){
        auto ch = str.begin();
        cout << "ch: " << *ch << endl;
        *ch = toupper(*ch);
    }
    cout << str << endl;

    return 0;
}
