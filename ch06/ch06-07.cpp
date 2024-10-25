#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1(5);
	for(int i : v1) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> v2(5, 0);
	for (int i : v2) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> v3(5, 10);
	for (int i : v3) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
