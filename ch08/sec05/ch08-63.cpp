#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Greater(int left, int right) {
	return left > right;
}

int main() {
	vector<int> v;
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);
	v.push_back(40);

	cout << "v[정렬 전] : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	stable_sort(v.begin(), v.end());
	cout << "v[정렬 less] : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	stable_sort(v.begin(), v.end(), Greater);
	cout << "v[정렬 Greater] : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
