#include <iostream>
#include <algorithm>
using namespace std;
//�ϰ������� Ű �� 100
// ���������� �����غ���!! �߿�!!!!
int main() {
	int dwarf[10];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i];
		sum += dwarf[i]; //��ü ��
	}
	sort(dwarf, dwarf + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (dwarf[i] + dwarf[j]) == 100) { //�θ��� �� ���� �� ���ϱ�
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