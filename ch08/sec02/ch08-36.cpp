#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n) {
	return n <= 30;
}

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(6);
	vector<int> v3(6);

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
	cout << "v3 : ";
	for (auto i : v3) {
		cout << i << ' ';
	}
	cout << endl;

	auto iter_end = replace_copy(v1.begin(), v1.end(), v2.begin(), 30, 0);
	iter_end = replace_copy_if(v1.begin(), v1.end(), v3.begin(), Pred, 0);

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
	cout << "v3 : ";
	for (auto i : v3) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
