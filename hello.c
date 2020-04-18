#include <stdio.h> 

int sum(int a, int b) {
	int c = a + b;
	return c;
}

int main() {
	printf("두 수의 합은 = %f\n", sum(1, 1));
	return 0;
}