#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);

	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter = adjacent_find(v.begin(), v.end());

	for ( ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}
