#include <iostream>
#include <algorithm>
using namespace std;

struct Less {
	bool operator()(int a, int b) {
		return a < b;
	}
};

struct Greater {
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {
	cout << Less()(10, 20) << endl;
	cout << Less()(20, 10) << endl;
	cout << Greater()(10, 20) << endl;
	cout << Greater()(20, 10) << endl;
	cout << endl;

	cout << less<int>()(10, 20) << endl;
	cout << less<int>()(20, 10) << endl;
	cout << greater<int>()(10, 20) << endl;
	cout << greater<int>()(20, 10) << endl;

	return 0;
}
