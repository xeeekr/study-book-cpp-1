#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

	v.front() = 100;
	v.back() = 500;

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

	v.at(0) = 1000;
	v.at(4) = 5000;
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
