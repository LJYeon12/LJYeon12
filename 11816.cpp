#include <iostream>
#include <stdio.h>
using namespace std;

string X;

void chOctal(string s) {
	int n = 1;
	int sum = 0;
	for (int i = s.size() - 1; i > 0; i--) {
		sum += (s[i]-'0') * n;
		n *= 8;
	}
	cout << sum;
}
void chHexa(string s) {
	int n = 1;
	int sum = 0;
	for (int i = s.size() - 1; i > 1; i--) {
		if (s[i] > 'a') sum += (s[i] - 'a' + 10) * n;
		else sum += (s[i] - '0') * n;
		n *= 16;
	}
	cout << sum;
}/*
int main() {
	cin >> X;

	if (X[0] == '0' && X[1] == 'x') chHexa(X);
	else if (X[0] == '0'&&X[1]!='x') chOctal(X);
	else cout << X;
	
	return 0;
}*/

int main()
{
	int x;
	scanf("%i", &x);
	printf("%d\n", x);
}