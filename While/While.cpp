#include <iostream>
#include <string>
using namespace std;

int main()
{
	int int1 = 17;
	int int2 = 29;
	while (int1 != int2)
	{
		int1++;
		cout << "operator true " << endl << "int1 != " << int1 << endl;
	}
	int1 = 10;
	int2 = 15;
	while (int1 < int2)
	{
		int1++;
		cout << "operator true " << endl << "int1 < " << int1 << endl;
	}
	int1 = 30;
	int2 = 27;
	while (int1 > int2)
	{
		int2++;
		cout << "operator true " << endl << "int2 > " << int2 << endl;
	}
	int1 = 5;
	int2 = 9;
	while (int1 <= int2)
	{
		int1++;
		cout << "operator true " << endl << "int1 <= " << int1 << endl;
	}
	int1 = 18;
	int2 = 15;
	while (int1 >= int2)
	{
		int2++;
		cout << "operator true " << endl << "int2 >= " << int2 << endl;
	}

}