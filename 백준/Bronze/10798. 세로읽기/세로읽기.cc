#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	char arr[5][15] = {'\0',};
	for (int i = 0; i < 5; i++)
	{
		string line;
		getline(cin, line);
		for (int j = 0; j < line.size(); j++) {
			arr[i][j] = line[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] != '\0')
				cout << arr[j][i];
		}
	}
}