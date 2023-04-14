#include <stdio.h>
int main() {
	int n, c, b = -1000001, s =1000001;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		if (n > b) b = n;
		if (n <  s) s = n;
	}
	printf("%d %d", s, b);
}