#include <iostream>
#include <algorithm>
#include <numeric>
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

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	vector<int> v3(5);

	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
	Print(v3, "v3(v1+v2) : ");

	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), multiplies<int>());
	Print(v3, "v3(v1*v2) : ");

	transform(v1.begin(), v1.end(), v3.begin(), negate<int>());
	Print(v3, "v3(-v1) : ");

	adjacent_difference(v1.begin(), v1.end(), v3.begin(), minus<int>());
	Print(v3, "v3(v1 인접 원소와의 차) : ");

	partial_sum(v1.begin(), v1.end(), v3.begin(), multiplies<int>());
	Print(v3, "v3(v1 원소의 곱 누적) : ");

	cout << "v1 모든 원소의 곱 : " << accumulate(v1.begin(), v1.end(), 1, multiplies<int>()) << endl;

	return EXIT_SUCCESS;
}
