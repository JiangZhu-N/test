#include<stdio.h>
int main() {
	int l, m;
	int a[10000] = {0};
	int x, y;
	int c=0;
	scanf("%d %d", &l, &m);
	for (int i = 0; i <= l; i++) {
		a[i] = 1;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		for (int j = x; j <= y; j++) {
			a[j] = 0;
		}
	}
	for (int i = 0; i <= l; i++) {
		if (a[i] == 1) {
			c++;
		}
	}
	printf("%d", c);
}
