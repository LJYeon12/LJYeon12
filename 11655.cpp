#include <iostream>
#include <string>
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
//NOPQRSTUVWXYZABCDEFGHIJKLM
//아스키 코드 이용
int main() {
	string S;
	getline(cin, S); //띄어쓰기도 포함해 입력 가능
	for (int i = 0; i < S.length(); i++) {
		if ('A' <= S[i] && S[i] <= 'M')	cout << (char)(S[i] + 13);
		else if ('N' <= S[i] && S[i] <= 'Z') cout << (char)(S[i] - 13);
		else if ('a' <= S[i] && S[i] <= 'm') cout << (char)(S[i] + 13);
		else if ('n' <= S[i] && S[i] <= 'z') cout << (char)(S[i] - 13);
		else cout << S[i];
	}
	return 0;
}