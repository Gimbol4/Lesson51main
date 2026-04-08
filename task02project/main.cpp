#include "logic.h"

int main() {
	long long x, n;
	cout << "Input a number: ";
	cin >> x;
	cout << "input a degree: ";
	cin >> n;

	cout << "Degreed number: " << power(n, x);
	return 0;
}