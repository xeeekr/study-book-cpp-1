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

	cout << "v[iterator] : ";
	for (auto iter = v.begin() ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	cout << "v[reverse_iterator] : ";
	for (auto iter = v.rbegin() ; iter != v.rend() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
