#include <iostream>
#include "SalesData.h"

int main()
{
	SalesData data1, data2;
	double price = 0;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenve = data1.units_sold * price;
	cout << "no: "<< data1.bookNo << ", sold: " << data1.units_sold << ", revenve: " << data1.revenve << endl;

	return 0;
}
