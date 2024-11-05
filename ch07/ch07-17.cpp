#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<int, string, greater<int>> m;

	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";

	map<int, string>::iterator iter;
	for (iter = m.begin() ; iter != m.end() ; ++iter) {
		cout << '(' << iter->first << ',' << iter->second << ')' << ' ';
	}
	cout << endl;

	cout << m[9] << ' ';
	cout << m[8] << ' ';
	cout << m[7] << ' ';
	cout << m[5] << ' ';
	cout << m[4] << ' ';
	cout << m[3] << ' ';
	cout << m[1] << endl;

	return 0;
}
