#include <iostream>
using namespace std;

int blue = 0;
int white = 0;

void merge(int* confetti[], int x, int y,int size) {
	bool cut = false;
	int color = confetti[x][y];
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			//현 사분면이 다른 색일 경우
			if (color != confetti[i][j]) {
				cut = true;
				break;
			}
		}
	}
	// combine은 수행하지 않음
	if (cut == true) {
		merge(confetti, x, y, size / 2); //왼쪽 위 사분면
		merge(confetti, x, y + size / 2, size / 2); //오른 위
		merge(confetti, x + size / 2, y, size / 2); //아래 왼
		merge(confetti, x + size / 2, y + size / 2, size / 2); //아래 오른
	}
	else {
		if (color == 1) blue++;
		else white++;
	}
}
int main() {
	int N;
	cin >> N; //2,4,8,16,32,64,128

	int confettinum= 1; //색종이 개수
	
	//2차원 배열 생성
	int** confetti = new int* [N];
	for (int i = 0; i < N; i++) {
		confetti[i] = new int[N];

		for (int j = 0; j < N; j++) cin >> confetti[i][j];
	}

	merge(confetti, 0, 0, N);
	cout << white << "\n";
	cout << blue << "\n";

	//할당 해제
	for (int i = 0; i < N; i++) {
		delete[] confetti[i];
	}
	delete[] confetti;

	return 0;
}