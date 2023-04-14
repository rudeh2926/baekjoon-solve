#include <stdio.h>
int main() {
	int n, a = 0, count = 0;
	for (int i = 1; i <= 9; i++) {
		scanf("%d", &n);
		if (n > a) {
			a = n;
			count = i;
		}
	}
	printf("%d\n%d", a, count);
}