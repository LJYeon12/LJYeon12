#include <iostream>
#include <stack>
#include <vector>
using namespace std;


//오큰수 + 쌍의 수
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector <long long> h(n); 
	for (long long& x : h) cin >> x;

	stack <pair <long long, long long>> pair; //키, 해당 키를 가진 사람 수
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		long long count = 1;
		while (!pair.empty() && pair.top().first <= h[i]) {
			sum += pair.top().second; // 현재 사람과 스택에 있는 사람 사이 쌍을 더함
			if (pair.top().first == h[i]) { // 키가 같은 경우 count를 더함
				count += pair.top().second;
			}
			pair.pop();
		}
		if (!pair.empty()) sum += 1; //현재 사람이 볼 수 있는 다른 사람 수(최소 쌍)
		pair.push({ h[i], count });
	}
	cout << sum;

	return 0;
} 