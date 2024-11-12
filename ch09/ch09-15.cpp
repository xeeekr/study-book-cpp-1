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
	auto negate = not_fn(less<int>());

	cout << negate(5, 10) << ':' << not_fn(oLess)(5, 10) << ':' << not_fn(less<int>())(5, 10) << endl;
	cout << negate(10, 10) << ':' << not_fn(oLess)(10, 10) << ':' << not_fn(less<int>())(10, 10) << endl;
	cout << negate(20, 10) << ':' << not_fn(oLess)(20, 10) << ':' << not_fn(less<int>())(20, 10) << endl;

	return EXIT_SUCCESS;
}
