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

	auto iter = v.begin() + 2;
	auto iter2 = v.insert(iter, 100);

	for (iter = v.begin() ; iter != v.end() ; ++iter) {
		cout << *iter << " ";
	}
	cout << endl;
	cout << "iter2: " << *iter2 << endl;

	return 0;
}
