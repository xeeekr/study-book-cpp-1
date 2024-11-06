#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Plus(int left, int right) {
	return left + right;
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

	auto iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus);

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
	cout << "[v3.begin(), iter_end) 순차열: " << *v3.begin() << " ... " << *(iter_end - 1) << endl;

	return EXIT_SUCCESS;
}
