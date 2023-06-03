#include <stdio.h>;

int sum(int a, int b) {
	return a + b;
}

int main(void) {
	int c = sum(4, 3);
	printf("a + b = %d\n", c);
	return 0;
}