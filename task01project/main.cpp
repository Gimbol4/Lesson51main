#include "logic.h"

int main() {
	long long number;
	cout << "Input a number: ";
	cin >> number;

	cout << "Quantity of numbers: " << find_quantity(number);
	return 0;
}