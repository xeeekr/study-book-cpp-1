#include <iostream>
using namespace std;

void Client();

void PrintHello() {
	cout << "Hello!" << endl;
	Client();
}

void Client() {
	cout << "난 client" << endl;
}

int main() {
	PrintHello();

	return 0;
}
