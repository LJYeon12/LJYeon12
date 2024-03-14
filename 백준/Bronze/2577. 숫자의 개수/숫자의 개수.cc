#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <int> num(10);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int A, B, C;
	int p;
	cin >> A >> B >> C;
	int product = A * B * C; //17037300
	while (product != 0) {
		p = product % 10;
		product /= 10;
		num[p]++;
	}

	for (int e : num)
		cout << e << "\n";
}