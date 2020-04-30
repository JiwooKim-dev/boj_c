// 백준 2750 '수 정렬하기'
// 삽입정렬 (Insertion Sort)

#include <iostream>

using namespace std;

int main() {

	int nums[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int j, tmp;
	for (int i = 1; i < n; i++) {
		tmp = nums[i];
		j = i - 1;
		while (j >= 0 && tmp < nums[j]) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = tmp;
	}

	for (int i = 0; i < n; i++) {
		cout << nums[i] << endl;
	}
}