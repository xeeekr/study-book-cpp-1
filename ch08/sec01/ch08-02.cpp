#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter_b = v.begin();
	auto iter_e = v.begin() + 2;
	auto iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e) {
		cout << *iter << endl;
	}

	cout << "===========" << endl;
	if (iter != v.end()) {
		cout << *iter << endl;
	}

	iter_b = v.begin();
	iter_e = v.end();
	iter = adjacent_find(iter_b, iter_e);

	if (iter != iter_e) {
		cout << *iter << endl;
	}
	if (iter != v.end()) {
		cout << *iter << endl;
	}


	for ( ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}
