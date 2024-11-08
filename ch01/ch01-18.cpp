#include <iostream>
using namespace std;

class IntArray {
	int *arr;
	int size;
	int capacity;

public:
	IntArray(int cap = 100) : arr(0), size(0), capacity(cap) {
		arr = new int[capacity];
	}
	~IntArray() {
		delete [] arr;
	}
	void Add(int data) {
		if (size < capacity) {
			arr[size++] = data;
		}
	}
	int Size() const {
		return size;
	}
	int operator[](int idx) const {
		return arr[idx];
	}
	int& operator[](int idx) {
		return arr[idx];
	}
};

int main() {
	IntArray ar(10);

	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	cout << ar[0] << endl;
	cout << endl;

	const IntArray &ar2 = ar;
	cout << ar2[0] << endl;
	cout << endl;

	ar[0] = 100;
	//ar2[0] = 100;

	return 0;
}
