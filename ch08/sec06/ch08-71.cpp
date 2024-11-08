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

	auto iter_pair = equal_range(v.begin(), v.end(), 30);

	cout << "30 원소의 순차열 [iter_pair.fist, iter_pair.second) :";
	for (auto iter = iter_pair.first ; iter != iter_pair.second ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
