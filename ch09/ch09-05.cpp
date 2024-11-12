#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

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
struct Plus : public function<T(T, T)> {
	T operator()(const T& left, const T& right) const {
		return left + right;
	}
};

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v3(3);

	transform(v1.begin(), v1.end(), v3.begin(), bind(Plus<int>(), 100, placeholders::_1));

	Print(v1, "v1 : ");
	Print(v3, "v3 : ");

	return EXIT_SUCCESS;
}
