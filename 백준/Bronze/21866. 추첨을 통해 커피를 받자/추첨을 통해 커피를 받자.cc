#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int score[9] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	bool hacker = false;
	int a;
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		if (score[i] < a) {
			hacker = true;
			break;
		}
		else
		{
			sum += a;
		}
	}

	if (hacker == true) {
		cout << "hacker";
	}
	else if (sum >= 100) {
		cout << "draw";
	}
	else
	{
		cout << "none";
	}



	return 0;
}