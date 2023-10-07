#include <iostream>
#include <cstring>
using namespace std;

char A[100001];
char B[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> A >> B; // 문자열은 한번에 입력 가능
	// strlen함수 이용 ==> 문자열 길이 구할때 사용
	for (int i = 0; i < strlen(A); i++) {
		if (A[i] == B[i]) {
			if (A[i] == '0') cout << 0;
			else cout << 1;
		}
		else cout << 0;
	}
	cout << "\n";
	
	for (int i = 0; i < strlen(A); i++) {
		if (A[i] == B[i]) {
			if (A[i] == '0') cout << 0;
			else cout << 1;
		}
		else cout << 1;
	}
	cout << "\n";

	for (int i = 0; i < strlen(A); i++) {
		if (A[i] == B[i]) {
			cout << 0;
		}
		else cout << 1;
	}
	cout << "\n";

	for (int i = 0; i < strlen(A); i++) {
		if (A[i] == '0') {
			cout << 1;
		}
		else cout << 0;
	}
	cout << "\n";

	for (int i = 0; i < strlen(A); i++) {
		if (B[i] == '0') {
			cout << 1;
		}
		else cout << 0;
	}
	cout << "\n";
	return 0;
}