#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n) {
	return 35 < n;
}

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

	auto iter = find(v.begin(), v.end(), 20);
	if (iter != v.end()) {
		cout << *iter << "을 찾다!" << endl;
	}

	iter = find_if(v.begin(), v.end(), Pred);
	if (iter != v.end()) {
		cout << "순차열에서 35보다 큰 첫 번째 원소: " << *iter << endl;
	}

	return 0;
}
