#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	stack <int> rooftop; //인덱스
	

	cin >> N;
	vector <int> h(N);
	for (int& x : h) {
		cin >> x; // 10, 3, 7, 4, 12, 2
	}
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		while (!rooftop.empty() && h[rooftop.top()] <= h[i]) { 
			rooftop.pop();
		} // 스택은 현재 빌딩들 중 오른쪽에 자신보다 높은 빌딩을 찾지 못한 빌딩들을 저장
		sum += rooftop.size();
		rooftop.push(i);
	}
	cout << sum;
}