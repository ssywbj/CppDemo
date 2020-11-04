#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
	unsigned index = 0;
	string line;
	while (getline(cin, line)) {
		index++;
		cout << "index: " << index << ", " << line << endl;
	}
	cout << "total: " << endl;

	return 0;
}
