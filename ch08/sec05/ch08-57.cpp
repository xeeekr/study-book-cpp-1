#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	make_heap(v.begin(), v.end());
	cout << "v[햅 생성] : ";
	for (auto i: v) {
		cout << i << ' ';
	}
	cout << endl;

	v.push_back(35);
	cout << "v 순차열에 35 추가 : ";
	for (auto i: v) {
		cout << i << ' ';
	}
	cout << endl;

	push_heap(v.begin(), v.end());
	cout << "v[힙 추가] 연산 수행: ";
	for (auto i: v) {
		cout << i << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}
