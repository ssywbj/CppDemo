#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string str("Hello World!!");
    const string::size_type len = str.size();
    cout << "\"" << str << "\"" << " len is " << len << endl;
    decltype(str.size()) index = 0;
    char c;
    for(;index < len;index++){
        c = str[index];
        if(isalpha(c) && islower(c)){
            c = toupper(c);
        }
    }
    cout << str << endl;

    index = 0;
    for(;index < len;index++){
        char &rc = str[index];
        if(isalpha(rc) && islower(rc)){
            rc = toupper(rc);
        }
    }
    cout << str << endl;

    char ch;
    index = 0;
    for(;index < len;index++){
        ch = str[index];
        if(isalpha(ch) && isupper(ch)){
            str[index] = tolower(ch);
        }
    }
    cout << str << endl;

    for(char &rc : str){
        if(isspace(rc)){
            rc = '-';
        }
    }
    cout << str << endl;

    unsigned cntPunct = 0;
    for(auto c : str){
        if(ispunct(c)){
            cntPunct++;
            c = '0';
        }
        cout << c << "  ";
    }
    cout << endl;
    cout << str << ", punct count: " << cntPunct << endl;

    return 0;
}
