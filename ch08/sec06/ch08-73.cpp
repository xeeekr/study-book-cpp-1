#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void Print(const T& container, const string& prefix) {
	cout << prefix;
	for (auto i : container) {
		cout << i << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	v.push_back(20);
	v.push_back(30);
	v.push_back(60);

	Print(v,
				"v의 두 구간으로 정렬된 하나의 순차열\n"
				"[v.begin(), v.begin() + 5) + [v.begin+5, v.end())\n"
				"v : ");

	inplace_merge(v.begin(), v.begin() + 5, v.end());

	Print(v, "v : ");

	return EXIT_SUCCESS;
}
