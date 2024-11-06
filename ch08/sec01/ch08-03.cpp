#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int a, int b) {
	return abs(b-a) > 10;
}

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(90);

	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter = adjacent_find(v.begin(), v.end(), Pred);

	if (iter != v.end()) {
		cout << *iter << endl;
	}

	for ( ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}
