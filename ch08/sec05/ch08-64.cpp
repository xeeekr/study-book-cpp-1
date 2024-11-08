#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

	partial_sort(v.begin(), v.begin() + 20, v.end());
	cout << "v[상위 정렬 20개] : ";
	for (auto i = 0 ; i < 20 ; ++i) {
		cout << v[i] << ' ';
	}
	cout << endl;
	cout << "v[하위 80개] : ";
	for (auto i = 20 ; i < v.size() ; ++i) {
		cout << v[i] << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
