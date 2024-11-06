#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Pred(int n) {
	return n < 40;
}

int main() {
	vector<int> v;
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	v.push_back(60);

	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter_sep = stable_partition(v.begin(), v.end(), Pred);

	for (auto iter = v.begin() ; iter != iter_sep ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
	for (auto iter = iter_sep ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
