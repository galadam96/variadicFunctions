#include <stdio.h>
#include <stdarg.h> 

int addingNumbers(int count, ...);

int main() {
	printf("Sum is: %i", addingNumbers(4, 10, 20, 30, 40));
	return 0;
}

int addingNumbers(int count, ...)
{
	int numActual = 0;
	int sum = 0;
	va_list parg;
	va_start(parg, count);
	for (int i = 0; i < count; i++) {
		numActual = va_arg(parg, int);
		sum = sum + numActual;
	}
	va_end(parg);
	return sum;
}
