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

bool Pred(int left, int right) {
	return 3 < right - left;
}

template<typename T, typename K, typename _Compare>
void BinarySearch(const T& v, K findNum, _Compare __compbool) {
	cout << findNum << " 원소가 존재"
			 << (binary_search(v.begin(), v.end(), findNum, __compbool)?"합니다.":"하지 않습니다.")
			 << endl;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);

	Print(v, "[v 원본] : ");

	sort(v.begin(), v.end());
	Print(v, "[v less 정렬] : ");

	BinarySearch(v, 20, less<int>());

	sort(v.begin(), v.end(), greater<int>());
	Print(v, "[v greater 정렬] : ");
	BinarySearch(v, 20, greater<int>());

	return EXIT_SUCCESS;
}
