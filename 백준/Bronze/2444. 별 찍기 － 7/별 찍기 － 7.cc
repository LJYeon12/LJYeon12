#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int sp, st;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		sp = (2 * n - 1) / 2 - i;
		if (sp < 0) sp = -sp;
		st = (2 * n - 1) - 2 * sp;
		for (int j = 0; j < sp; j++) cout << ' ';
		for (int k = 0; k < st; k++) cout << '*';
		cout << endl;
	}
}