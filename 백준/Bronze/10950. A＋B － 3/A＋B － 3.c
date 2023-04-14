
#include <stdio.h>
int main() {
	int n1, n2, a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
}