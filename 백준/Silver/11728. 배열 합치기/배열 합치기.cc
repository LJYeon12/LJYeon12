#include <iostream>
using namespace std;
#define MAX 1000001

int N, M;
int A[MAX],B[MAX];
int tmp[MAX] = {0,};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	int i = 0; int j = 0; int k = 0;
	while(i<N || j<M) {
		if (A[i] < B[j]) { 
			if (i >= N) { cout << B[j] << " "; j++; }
			else{ cout << A[i] << " "; i++; }
		}
		else  {
			if (j >= M) {
				cout << A[i] << " "; i++;
			}
			else {
				cout << B[j] << " "; j++;
			}
		} 
	}
//	for (int i = 0; i < N+M; i++) cout << tmp[i] << ' ';

	return 0;
}