#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	random_device rd;
	mt19937 g(rd());
	shuffle(v.begin(), v.end(), g);

	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
