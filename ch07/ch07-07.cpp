#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin() ; iter != s.end() ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = s.find(30);
	if (iter != s.end()) {
		cout << *iter << "가 s에 있다!" << endl;
	} else {
		cout << "20이 s에 없다!" << endl;
	}

	return 0;
}
