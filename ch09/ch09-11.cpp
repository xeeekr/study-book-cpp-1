#include <iostream>
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

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	Print(v, "v : ");

	cout << "20보다 작은 원소의 개수 : " << count_if(v.begin(), v.end(), bind(less<int>(), placeholders::_1, 20)) << endl;
	cout << "20보다 작거나 같은 원소의 개수 : " << count_if(v.begin(), v.end(), bind(less_equal<int>(), placeholders::_1, 20)) << endl;
	cout << "20보다 큰 원소의 개수 : " << count_if(v.begin(), v.end(), bind(greater<int>(), placeholders::_1, 20)) << endl;
	cout << "20보다 크거나 같은 원소의 개수 : " << count_if(v.begin(), v.end(), bind(greater_equal<int>(), placeholders::_1, 20)) << endl;
	cout << "20과 같은 원소의 개수 : " << count_if(v.begin(), v.end(), bind(equal_to<int>(), placeholders::_1, 20)) << endl;
	cout << "20과 다른 원소의 개수 : " << count_if(v.begin(), v.end(), bind(not_equal_to<int>(), placeholders::_1, 20)) << endl;

	return EXIT_SUCCESS;
}
