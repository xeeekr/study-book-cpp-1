#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);

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

	if (equal(v1.begin(), v1.end(), v2.begin())) {
		cout << "두 순차열은 같습니다." << endl;
	}

	return 0;
}
