#include <iostream>
using namespace std;

int max_score;

int find_max(float arr[], int arr_min, int arr_max)
{
	int max_s = 0;
	for (int i = arr_min; i < arr_max; i++)
	{
		if (max_s < arr[i]) max_s = arr[i];
	}
	return max_s;
}
void new_score(float *arr, int arrange_min, int arrange_max)
{
	for (int i = arrange_min; i < arrange_max; i++)
	{
		arr[i] = arr[i] / max_score * 100;
	}
}
float find_average(float arr[], int arrange_min, int arrange_max) {
	float sum = 0;
	for (int i = arrange_min; i < arrange_max; i++)
	{
		sum += arr[i];
	}
	return sum / (arrange_max - arrange_min);
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	float score[1001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	max_score = find_max(score, 0, n);
	new_score(score, 0, n);
	cout << find_average(score, 0, n);
}