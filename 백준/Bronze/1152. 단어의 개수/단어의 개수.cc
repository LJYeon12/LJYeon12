#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string arr;
	getline(cin, arr); // 공백을 포함한 문자열 입력받기
	int sum = 0;
	for (int i = 0; i < arr.length(); i++) {
		if (arr[i] == ' ' && i != 0 && i != arr.length()-1) sum++; 
	}
	if (arr.empty()) cout << 0;
	else if (arr.size() == 1 && arr[0] == ' ') cout << 0;
	else { 
		cout << sum + 1; }

	return 0;
}