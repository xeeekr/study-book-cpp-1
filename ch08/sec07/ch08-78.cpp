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

template<typename T>
struct Plus {
	T operator()(const T& left, const T& right) {
		return left + right;
	}
};

int main() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	vector<int> v2;
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);

	cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0) << endl;
	cout << inner_product(v1.begin(), v1.end(), v2.begin(), 100) << endl;

	return EXIT_SUCCESS;
}
