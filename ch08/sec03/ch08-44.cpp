#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(5);

	cout << "v1 : ";
	for (auto i : v1) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "v2 : ";
	for (auto i : v2) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter_end = remove_copy(v1.begin(), v1.end(), v2.begin(), 30);

	cout << "v1 : ";
	for (auto i : v1) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "v2 : ";
	for (auto i : v2) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "[v2.begin(), iter_end) : ";
	for (auto iter = v2.begin() ; iter != iter_end ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;


	return EXIT_SUCCESS;
}
