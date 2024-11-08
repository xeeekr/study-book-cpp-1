#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

template<typename T>
void Print(const T& container, const string& prefix) {
	cout << prefix;
	for (auto i : container) {
		cout << i << ' ';
	}
	cout << endl;
}

template<typename _InputIter>
void Print(_InputIter b, _InputIter e, const string& prefix) {
	cout << prefix;
	for (auto iter = b ; iter != e ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	Print(v, "v : ");

	cout << accumulate(v.begin(), v.end(), 0) << endl;
	cout << accumulate(v.begin(), v.end(), 100) << endl;

	return EXIT_SUCCESS;
}
