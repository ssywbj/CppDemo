#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
	unsigned index = 0;
	string word;
	while (cin >> word) {
		index++;
		cout << "index: " << index << ", " << word << endl;
	}
	cout << "total: " << endl;

	return 0;
}
