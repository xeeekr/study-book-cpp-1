#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	auto middle = v.begin() + 2;
	rotate(v.begin(), middle, v.end());

	cout << "v : ";
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
