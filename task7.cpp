#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	float money, rate;
	int years;
	cout << "Money = ";
	cin >> money;
	cout << "Years = ";
	cin >> years;
	cout << "Rate = ";
	cin >> rate;
	rate = (rate + 100) / 100;
	for (int i = 0; i < years; i++)
		money *= rate;
	cout << "Your money: " << money << endl;
}
