#include <assert.h>
#include <stdio.h>

#include "t1.h"

const int fib[] = {1,1,2,3,5,8,13,21,34,55,89};

bool check_eq(int n) {
	if (n<=0) return 1;
	return f(n) == fib[n];
}

int main() {
	for (int i=0; i<=10; i++)
		printf("i: %d, f(i): %d - %s\n", i, f(i), check_eq(i)? "MATCH" : "MISMATCH");
	for (int i=0; i>-10; i--)
		printf("i: %d, f(i): %d - %s\n", i, f(i), check_eq(i)? "MATCH" : "MISMATCH");
	return 0;
}
