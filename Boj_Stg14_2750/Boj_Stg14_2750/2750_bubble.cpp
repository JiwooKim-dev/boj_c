// 백준 2750 '수 정렬하기'
// 버블정렬 (Bubble Sort)

#include <iostream>

using namespace std;

int main() {

	int nums[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (nums[j] > nums[j + 1]) {
				swap(nums[j], nums[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << nums[i] << endl;
	}
}