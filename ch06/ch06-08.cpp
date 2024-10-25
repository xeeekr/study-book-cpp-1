#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(5);

	for (auto i = 0 ; i < v.size() ; i++) {
		v[i] = (i + 1) * 10;
	}
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	v.resize(10);
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	v.resize(5);
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	return 0;
}
