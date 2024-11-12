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
	plus<int> oPlus;
	cout << oPlus(10, 20) << endl;
	cout << oPlus.operator()(10, 20) << endl;

	cout << plus<int>()(10, 20) << endl;
	cout << plus<int>().operator()(10, 20) << endl;

	return EXIT_SUCCESS;
}
