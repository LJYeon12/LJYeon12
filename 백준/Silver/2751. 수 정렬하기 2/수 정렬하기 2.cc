#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int arr[1000001];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
}