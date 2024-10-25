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

	for (auto iter = v.begin() ; iter != v.end() ; ++iter) {
		cout << *iter << " ";
	}
	cout << endl;

	for (auto riter = v.rbegin() ; riter != v.rend() ; ++riter) {
		cout << *riter << " ";
	}
	cout << endl;

	return 0;
}
