#include <iostream>
#include <string>
using namespace std;
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
//NOPQRSTUVWXYZABCDEFGHIJKLM
//�ƽ�Ű �ڵ� �̿�
int main() {
	string S;
	getline(cin, S); //���⵵ ������ �Է� ����
	for (int i = 0; i < S.length(); i++) {
		if ('A' <= S[i] && S[i] <= 'M')	cout << (char)(S[i] + 13);
		else if ('N' <= S[i] && S[i] <= 'Z') cout << (char)(S[i] - 13);
		else if ('a' <= S[i] && S[i] <= 'm') cout << (char)(S[i] + 13);
		else if ('n' <= S[i] && S[i] <= 'z') cout << (char)(S[i] - 13);
		else cout << S[i];
	}
	return 0;
}