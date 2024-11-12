#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

void Print(vector<int>& v, const string& str) {
	cout << str;
	for (auto iter = v.begin() ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
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

	copy(v1.begin(), v1.end(), inserter<vector<int>>(v2, v2.begin()));

	Print(v1, "v1 : ");
	Print(v2, "v2 : ");


	return EXIT_SUCCESS;
}
