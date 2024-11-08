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
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	Print(v, "v : ");

	cout << accumulate(v.begin(), v.end(), 0, Plus<int>()) << endl;
	cout << accumulate(v.begin(), v.end(), 0, Plus<int>()) << endl;
	cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;

	return EXIT_SUCCESS;
}
