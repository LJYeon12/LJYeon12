#include <iostream>
using namespace std;

int mod(int arr1,int arr2) {
	int big = (arr1 >= arr2) ? arr1 : arr2;
	int small = (arr1 <= arr2) ? arr1 : arr2;
	int remain;
	while (true)
	{
		remain = big % small;
		if (remain == 0) return small;
		big = small;
		small = remain;
	}
}

int main() {
	int a[2], b[2];
	cin >> a[0] >> a[1];
	cin >> b[0] >> b[1];
	// 입력받은 수를 기약분수로 만든다.
	// 분자와 분모를 최대 공약수로 나누어 준다.
	int gcd_a = mod(a[0], a[1]), gcd_b = mod(b[0], b[1]);
	a[0] /= gcd_a;	a[1] /= gcd_a;
	b[0] /= gcd_b;	b[1] /= gcd_b;
	// 두 분모의 최소 공배수를 구해준다.
	int denominator = a[1] * b[1] / mod(a[1], b[1]);
	// 각각의 분자에 (최소 공배수 / 분모) 만큼 곱하여 더해준다.
	int numerator = a[0] * (denominator / a[1]) + b[0] * (denominator / b[1]);
	// 분수 A + B를 기약분수로 만들어 준다.
	int lcm_r = mod(denominator, numerator);
	denominator /= lcm_r;
	numerator /= lcm_r;
	cout << numerator << " " << denominator;
}