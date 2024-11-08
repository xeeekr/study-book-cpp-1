#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void Print(const T& container, const string& prefix) {
	cout << prefix;
	for (auto i : container) {
		cout << i << ' ';
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
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(60);

	vector<int> v3(10);

	Print(v1, "v1 : ");
	Print(v2, "v2 : ");
	Print(v3, "v3 : ");

	auto iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	Print(v1, "v1 : ");
	Print(v2, "v2 : ");
	Print(v3, "v3 : ");

	cout << "[v3.begin(), iter_end) : ";
	for (auto iter = v3.begin() ; iter != iter_end ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
