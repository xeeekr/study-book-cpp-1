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

template<typename T>
struct Logical_and : public function<bool(T, T)> {
	bool operator()(const T& left, const T& right) const {
		return left && right;
	}
};

int main() {
	int n = 30;
	logical_and<bool> oAnd;

	cout << boolalpha << oAnd(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	cout << boolalpha << oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;

	cout << boolalpha << logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	cout << boolalpha << logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
	return EXIT_SUCCESS;
}
