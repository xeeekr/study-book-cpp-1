#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

template<typename T>
void Print(T& v, const string& str) {
	cout << str;
	for (auto iter = v.begin() ; iter != v.end() ; ++iter) {
		cout << *iter << ' ';
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

	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);

	list<int> lt2;
	lt2.push_back(1);
	lt2.push_back(2);
	lt2.push_back(3);

	copy(v.begin(), v.end(), back_inserter<list<int>>(lt1));
	copy(v.begin(), v.end(), front_inserter<list<int>>(lt2));

	Print(v, "v : ");
	Print(lt1, "lt1 : ");
	Print(lt2, "lt2 : ");

	return EXIT_SUCCESS;
}
