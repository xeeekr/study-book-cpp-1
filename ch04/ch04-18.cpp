#include <iostream>
using namespace std;

template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf) {
	while (begin != end) {
		pf(*begin++);
	}
}

void PrintInt(int n) {
	cout << n << " ";
}

void PrintString(string data) {
	cout << data << " ";
}

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	For_each<int *, void (*)(int)>(arr, arr+5, PrintInt);
	cout << endl;

	string sarr[3] = {"abc", "ABCDE", "Hello!"};
	For_each<string *, void (*)(string)>(sarr, sarr+3, PrintString);
	cout << endl;

	return 0;
}
