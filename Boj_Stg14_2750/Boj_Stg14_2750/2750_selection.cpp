// 백준 2750 '수 정렬하기'
// 선택정렬 (Selection Sort)

#include <iostream>

using namespace std;

int main() {

	int nums[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int tmp;
	for (int i = 0; i < n; i++) {
		tmp = i;
		for (int j = i + 1; j < n; j++) {
			if (nums[tmp] > nums[j]) {
				tmp = j;
			}
		}
		swap(nums[tmp], nums[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << nums[i] << endl;
	}
}