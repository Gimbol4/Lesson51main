#include "logic.h"

long long find_quantity(long long number) {
	long long quantity = 0;
	while (number > 0) {
		number /= 10;
		quantity++;
	}
	return quantity;
}