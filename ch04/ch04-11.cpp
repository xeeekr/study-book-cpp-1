#include <iostream>
#include <string>
using namespace std;

class IntArray {
	int *buf;
	int capacity;
	int size;

public:
	explicit IntArray(int cap = 100) : buf(0), size(0), capacity(cap) {
		buf = new int[capacity];
	}
	~IntArray() {
		delete [] buf;
	}
	void Add(int data) {
		buf[size++] = data;
	}
	int operator[](int idx) const {
		return buf[idx];
	}
	int GetSize() const {
		return size;
	}
};

class DoubleArray {
	double *buf;
	int capacity;
	int size;

public:
	explicit DoubleArray(int cap = 100) : buf(0), size(0), capacity(cap) {
		buf = new double[capacity];
	}
	~DoubleArray() {
		delete [] buf;
	}
	void Add(double data) {
		buf[size++] = data;
	}
	double operator[](int idx) const {
		return buf[idx];
	}
	int GetSize() const {
		return size;
	}
};

class StringArray {
	string *buf;
	int capacity;
	int size;

public:
	explicit StringArray(int cap = 100) : buf(0), size(0), capacity(cap) {
		buf = new string[capacity];
	}
	~StringArray() {
		delete [] buf;
	}
	void Add(string data) {
		buf[size++] = data;
	}
	string operator[](int idx) const {
		return buf[idx];
	}
	int GetSize() const {
		return size;
	}
};

int main() {
	IntArray iarr;
	iarr.Add(10);
	iarr.Add(20);
	iarr.Add(30);
	for (int i = 0 ; i < iarr.GetSize() ; ++i) {
		cout << iarr[i] << endl;
	}
	cout << endl;

	DoubleArray darr;
	darr.Add(10.12);
	darr.Add(20.12);
	darr.Add(30.12);
	for (int i = 0 ; i < darr.GetSize() ; ++i) {
		cout << darr[i] << endl;
	}
	cout << endl;

	StringArray sarr;
	sarr.Add("abc");
	sarr.Add("ABC");
	sarr.Add("Hello!");
	for (int i = 0 ; i < sarr.GetSize() ; ++i) {
		cout << sarr[i] << endl;
	}

	return 0;
}
