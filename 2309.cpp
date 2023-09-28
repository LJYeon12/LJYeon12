#include <iostream>
#include <algorithm>
using namespace std;
//일곱난쟁이 키 합 100
// 역설적으로 생각해보자!! 중요!!!!
int main() {
	int dwarf[10];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i];
		sum += dwarf[i]; //전체 합
	}
	sort(dwarf, dwarf + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (dwarf[i] + dwarf[j]) == 100) { //두명을 뺀 값의 합 구하기
				for (int z = 0; z < 9; z++) {
					if (z != i && z != j) {
						cout << dwarf[z] << "\n";
					}
				}
				return 0;
			}
		}
	}
	return 0;
}