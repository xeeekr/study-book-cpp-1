#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {
	return abs(right - left) < 10;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(11);
	v.push_back(30);
	v.push_back(32);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter_end = unique(v.begin(), v.end(), Pred);

	cout << "v : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	cout << "[v.begin(), iter_end) : ";
	for (auto iter = v.begin() ; iter != iter_end ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;


	return EXIT_SUCCESS;
}
