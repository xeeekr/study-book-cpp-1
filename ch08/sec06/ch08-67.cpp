#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void Print(const T& v, const string& prefix) {
	cout << prefix;
	for (auto i : v) {
		cout << i << ' ';
	}
	cout << endl;
}

bool Pred(int left, int right) {
	return 3 < right - left;
}

template<typename T, typename K>
void BinarySearch(const T& v, K find_num, bool (*pred)(K, K)) {
	cout << find_num << " 원소가 존재"
			 << (binary_search(v.begin(), v.end(), find_num, pred)?"합니다.":"하지 않습니다.")
			 << endl;
}

int main() {
	vector<int> v;
	v.push_back(40);
	v.push_back(46);
	v.push_back(12);
	v.push_back(80);
	v.push_back(10);
	v.push_back(47);
	v.push_back(30);
	v.push_back(55);
	v.push_back(90);
	v.push_back(53);

	Print<vector<int>>(v, "[v 원본] : ");

	sort(v.begin(), v.end(), Pred);
	Print<vector<int>>(v, "[v 정렬] : ");

	BinarySearch<vector<int>, int>(v, 32, Pred);
	BinarySearch<vector<int>, int>(v, 35, Pred);

	return EXIT_SUCCESS;
}
