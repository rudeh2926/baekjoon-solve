
#include <stdio.h>
int main() {
	float score[1000], high = 0, total = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &score[i]);
		if (high < score[i]) high = score[i];
	}
	for (int j = 0; j < n; j++) {
		score[j] = score[j] / high * 100.0;
		total += score[j];
	}
	printf("%.2lf", total / n);
}
