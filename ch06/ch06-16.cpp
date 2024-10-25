#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(5, 1);

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

	v.assign(5, 2);

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
