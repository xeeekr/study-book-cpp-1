#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	vector<int> v;

	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_insert_iterator<vector<int>>(v));

	cout << "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return EXIT_SUCCESS;
}
