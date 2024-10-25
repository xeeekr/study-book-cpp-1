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

	vector<int> v2(v.begin(), v.end());

	for (int i : v2) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> v3;
	v3.assign(v.begin(), v.end());
	for (int i : v3) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
