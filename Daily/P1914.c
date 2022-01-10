#include<stdio.h>
#include<string.h>
int main() {
	int n,i=0;
	scanf("%d", &n);
	while (n >= 26) {
		n -= 26;
	}
	while (n <= -26) {
		n += 26;
	}
	char a[100];
	scanf("%s", a);
	for (int i = 0;i<strlen(a);i++) {
		if (n >= 0) {
			if (a[i]+n <= 'z' || n == 0) {
				a[i] += n;
			}
			else {
				a[i] = a[i] - 26 + n;
			}
		}
		else {
			if (a[i] +n>= 'a' || n == 0) {
				a[i] += n;
			}
			else {
				a[i] = a[i] + 26 + n;
			}
		}
	}
	printf("%s", a);
}
