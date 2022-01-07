#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	int i;
	char s[10000];
	char ans[6][10000];
	scanf("%s", s);
	for (i = 0; i < n; i++) {
		if (s[i] == '0') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "X.X") ;
			strcat(ans[2], "X.X") ;
			strcat(ans[3], "X.X") ;
			strcat(ans[4], "XXX") ;
		}
		if (s[i] == '1') {
			strcat(ans[0], "..X") ;
			strcat(ans[1], "..X") ;
			strcat(ans[2], "..X") ;
			strcat(ans[3], "..X") ;
			strcat(ans[4], "..X") ;
		}
		if (s[i] == '2') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "..X") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "X..") ;
			strcat(ans[4], "XXX") ;
		}
		if (s[i] == '3') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "..X") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "..X") ;
			strcat(ans[4], "XXX") ;
		}
		if (s[i] == '4') {
			strcat(ans[0], "X.X") ;
			strcat(ans[1], "X.X") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "..X") ;
			strcat(ans[4], "..X") ;
		}
		if (s[i] == '5') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "X..") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "..X") ;
			strcat(ans[4], "XXX") ;
		}
		if (s[i] == '6') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "X..") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "X.X") ;
			strcat(ans[4], "XXX") ;
		}
		if (s[i] == '7') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "..X") ;
			strcat(ans[2], "..X") ;
			strcat(ans[3], "..X") ;
			strcat(ans[4], "..X") ;
		}
		if (s[i] == '8') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "X.X") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "X.X") ;
			strcat(ans[4], "XXX") ;
		}
		if (s[i] == '9') {
			strcat(ans[0], "XXX") ;
			strcat(ans[1], "X.X") ;
			strcat(ans[2], "XXX") ;
			strcat(ans[3], "..X") ;
			strcat(ans[4], "XXX") ;
		}
		if (i != n - 1) {
			strcat(ans[0], ".") ;
			strcat(ans[1], ".") ;
			strcat(ans[2], ".") ;
			strcat(ans[3], ".") ;
			strcat(ans[4], ".") ;
		}

	}
	for (i = 0; i < 5; i++)
		printf("%s\n", ans[i]);
}