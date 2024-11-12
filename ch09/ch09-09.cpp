#include <iostream>
#include <functional>
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
	less<int> oLess;
	cout << oLess(10, 20) << endl;
	cout << oLess.operator()(10, 20) << endl;

	cout << less<int>()(10, 20) << endl;
	cout << less<int>().operator()(10, 20) << endl;

	return EXIT_SUCCESS;
}
