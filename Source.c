
#include <stdio.h>

int main() {
	unsigned long long N;
	int b;
	scanf("%llu %d", &N, &b);
	if (N > (1LLU << (b + 1)) - 1) 
		printf("no");
	else 
		printf("yes");
	
	
	return 0;
}
