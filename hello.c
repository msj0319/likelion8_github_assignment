#include <stdio.h> 

int sum(int a, int b) {
	int c = a + b;
	return c;
}

int main() {
	printf("두 수의 합은 = %d\n", sum(4, 1));
	return 0;
}