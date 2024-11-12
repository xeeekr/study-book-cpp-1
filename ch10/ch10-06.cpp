#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin() + 1;
	vector<int>::const_iterator citer = iter;
	reverse_iterator<vector<int>::iterator> riter(iter);
	reverse_iterator<vector<int>::const_iterator> criter(riter);

	cout << "iter : " << *iter << endl;
	cout << "citer : " << *citer << endl;
	cout << "riter : " << *riter << endl;
	cout << "criter : " << *criter << endl;
	cout << "===========" << endl;
	cout << "riter.base() => iter : " << *riter.base() << endl;
	cout << "criter.base() => citer : " << *criter.base() << endl;

	return EXIT_SUCCESS;
}
