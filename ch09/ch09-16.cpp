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
	auto binder = bind(less<int>(), placeholders::_1, 10);
	auto negate = not_fn(binder);

	cout << negate(5) << ':' << not_fn(binder)(5) << ':' << not_fn(bind(less<int>(), placeholders::_1, 10))(5) << endl;
	cout << negate(10) << ':' << not_fn(binder)(10) << ':' << not_fn(bind(less<int>(), placeholders::_1, 10))(10) << endl;
	cout << negate(20) << ':' << not_fn(binder)(20) << ':' << not_fn(bind(less<int>(), placeholders::_1, 10))(20) << endl;

	return EXIT_SUCCESS;
}
