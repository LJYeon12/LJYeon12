#include <iostream>
#include <string>
using namespace std;

void widthcal(string N) {
	int cal = 1;
	for (int i = 0; i < N.size(); i++) {
		int num = N[i];
		if (N[i] == '1') cal += 2;
		else if (N[i] == '0') cal += 4;
		else cal += 3;
		cal++;
	}
	cout << cal<<"\n";
}
int main() {

	string N;
	while (true) {
		cin >> N;
		if (N == "0") break;
		widthcal(N);
	}

	return 0;
}