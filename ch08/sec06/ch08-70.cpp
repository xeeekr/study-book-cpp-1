#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void Print(const T& container, const string& prefix) {
	cout << prefix;
	for (auto i : container) {
		cout << i << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	auto iter_lower = lower_bound(v.begin(), v.end(), 30);
	auto iter_upper = upper_bound(v.begin(), v.end(), 30);

	cout << "30 원소의 순차열 [iter_lower, iter_upper) :";
	for (auto iter = iter_lower ; iter != iter_upper ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
