// 백준 2751 '수 정렬하기 2'
// 병합정렬 (Merge Sort)

#include <iostream>

using namespace std;

int* nums;
int* buffers;

void merge(int start, int middle, int end) {

	int i = start, j = middle + 1;
	int idx = start;

	while (i <= middle && j <= end) {
		if (nums[i] <= nums[j])
			buffers[idx++] = nums[i++];
		else if (nums[i] > nums[j])
			buffers[idx++] = nums[j++];
	}

	while (i <= middle)
		buffers[idx++] = nums[i++];
	while (j <= end)
		buffers[idx++] = nums[j++];

	for (int k = start; k <= end; k++) {
		nums[k] = buffers[k];
	}
}

void merge_sort(int start, int end) {

	if (start < end) {
		int middle = (start + end) / 2;
		// divide
		merge_sort(start, middle);
		merge_sort(middle + 1, end);
		// conquer
		merge(start, middle, end);
	}
}

int main() {

	int n;
	cin >> n;

	nums = new int[n];
	buffers = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << nums[i] << '\n';	// endl : 시간초과
	}
}