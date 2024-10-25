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

	for (auto iter = v.begin() ; iter != v.end() ; ++iter) {
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}
