#include <iostream>
#include <algorithm>
#define MAX_VALUE 1000000
using namespace std;

// 에라토스테네스의 체 -> O(Nlog(logN))
// N의 범위는 100만 까지 이므로 시간복잡도에 따르면 약 720만번 정도의 연산이 들어간다
bool prime_number[MAX_VALUE + 1];
// MySet
void set_prime_number() {
	// true로 배열 초기화
	fill(prime_number, prime_number + MAX_VALUE + 1, true);
	prime_number[0] = prime_number[1] = false;

	// 에라토스테네스의 체
	for (int i = 2; i* i <= MAX_VALUE; i++) {
		/*
			왜 i * i 를 이용할까? ex) i = 5일 경우 5 * 2, 5 * 3, 5 * 4는 이미 이전 소수에서 처리되었을 것이다
			5*5부터 시작하는 것이 더 효율적
		*/
		if (!prime_number[i]) continue;
		for (int j = i * i; j <= MAX_VALUE; j+= i) { // j는 j의 배수만 체트하면 되므로 j++이 아닌 j+= i
			prime_number[j] = false; // j의 모든 배수 = false
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	set_prime_number();

	int t, num, ans;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		ans = 0;
		for (int i = 2; i < (num / 2) + 1; i++) {
			// i + (num - i) -> i와 num - i가 소수인 경우
			if (prime_number[i] && prime_number[num - i]) ans++;
		}
		cout << ans << "\n";
	}
}