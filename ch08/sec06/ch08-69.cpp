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
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(40);

	vector<int> v3;
	v3.push_back(10);
	v3.push_back(20);
	v3.push_back(60);

	cout << "v2는 v1의 부분 집합" << (includes(v1.begin(), v1.end(), v2.begin(), v2.end())?"":" 아님") << endl;
	cout << "v3는 v1의 부분 집합" << (includes(v1.begin(), v1.end(), v3.begin(), v3.end())?"":" 아님") << endl;

	sort(v1.begin(), v1.end(), greater<int>());
	sort(v2.begin(), v2.end(), greater<int>());
	cout << "greater 정렬 순차열 : v2는 v1의 부분 집합"
		   << (includes(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>())?"":" 아님") << endl;

	return EXIT_SUCCESS;
}
