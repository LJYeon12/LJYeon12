#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> a(n); //n개 배열 생성
	for (int& x : a) {
		cin >> x;
	}

	vector<int> answer(n, -1); //오큰수를 찾지 못한 경우 -1반환
	stack<int> s; //원소의 인덱스 저장

	// a = 3, 5, 2, 7
	for (int i = 0; i < n; i++) {
		while (!s.empty() && a[s.top()] < a[i]) {
			answer[s.top()] = a[i];
			s.pop();
		}
		s.push(i); //현재 원소 인덱스를 스택에 푸시
	}

	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}

	return 0;
}