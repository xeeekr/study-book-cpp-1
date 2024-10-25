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

	cout << v[0] << ", " << v.front() << endl;
	cout << v[4] << ", " << v.back() << endl;

	return 0;
}
