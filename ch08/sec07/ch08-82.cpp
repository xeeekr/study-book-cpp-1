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

int Plus(int left, int right) {
	return left + right;
}

int Minus(int left, int right) {
	return left - right;
}

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	Print(v1, "v1 : ");

	vector<int> v2(10);

	auto iter_end = partial_sum(v1.begin(), v1.end(), v2.begin());

	Print(v2, "v2 : ");
	Print(v2.begin(), iter_end, "[v2.begin(), iter_end) : ");

	return EXIT_SUCCESS;
}
