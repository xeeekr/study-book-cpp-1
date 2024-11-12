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
	auto binder = bind(less<int>(), 10, placeholders::_1);

	cout << binder(5) << ':' << less<int>()(10, 5) << endl;
	cout << binder(10) << ':' << less<int>()(10, 10) << endl;
	cout << binder(20) << ':' << less<int>()(10, 20) << endl;
	cout << "=====위와 같음=====" << endl;
	cout << bind(less<int>(), 10, placeholders::_1)(5) << ':' << less<int>()(10, 5) << endl;
	cout << bind(less<int>(), 10, placeholders::_1)(10) << ':' << less<int>()(10, 10) << endl;
	cout << bind(less<int>(), 10, placeholders::_1)(20) << ':' << less<int>()(10, 20) << endl;


	return EXIT_SUCCESS;
}
