#include "logic.h"

long long power(long long n, long long x) {
	long long result = x;
	if (n == 1) {
		result = x;
	}
	else {
		for (; n > 1; n--)
		{
			result *= x;
		}
	}
	return result;
}
