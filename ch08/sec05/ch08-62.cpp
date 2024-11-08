#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Greater(int left, int right) {
	return left > right;
}

int main() {
	vector<int> v;

	for (int i = 0 ; i < 100 ; ++i) {
		v.push_back(rand() % 1000);
	}

	cout << "v[정렬 전] : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	sort(v.begin(), v.end());
	cout << "v[정렬 less] : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	sort(v.begin(), v.end(), Greater);
	cout << "v[정렬 Greater] : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
