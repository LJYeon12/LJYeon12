#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	stack <int> line;
	int n, number_ticket, turn = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number_ticket;
		line.push(number_ticket);
		while ( !line.empty() && line.top() == turn) {
			line.pop();
			turn++;
		}
	}
	if (line.empty()) cout << "Nice";
	else cout << "Sad";
	
	return 0;
}