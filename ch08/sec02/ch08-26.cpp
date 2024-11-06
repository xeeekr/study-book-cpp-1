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

	vector<int> v2(10);

	auto iter = copy_backward(v1.begin(), v1.end(), v2.end());
	cout << "v2 첫 원소: " << *iter << endl;

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



	return EXIT_SUCCESS;
}
