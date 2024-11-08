#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v1;

	for (int i = 0 ; i < 100 ; ++i) {
		v1.push_back(rand() % 1000);
	}

	cout << "[v1 정렬 전] : ";
	for (auto i : v1) {
		cout << i << ' ';
	}
	cout << endl;

	vector<int> v2(20);

	partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end());
	cout << "[v2 less] : ";
	for (auto i : v2) {
		cout << i << ' ';
	}
	cout << endl;

	partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>());
	cout << "[v2 greater] : ";
	for (auto i : v2) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
