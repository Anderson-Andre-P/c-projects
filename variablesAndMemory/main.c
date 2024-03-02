#include <stdio.h>

int main() {
	int a = 10;
	int b, c;
	
	printf("&a = %p, %d\n", &a, a);
	printf("&b = %p, %d\n", &b, b);
	printf("&c = %p, %d\n", &c, c);
	
	b = 20;
	c = a + b;
	
	printf("&a = %p, %d\n", &a, a);
	printf("&b = %p, %d\n", &b, b);
	printf("&c = %p, %d\n", &c, c);
	
	return 0;
}
