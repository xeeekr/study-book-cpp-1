#include <iostream>

using namespace std;

struct LessFunctor {
	bool operator()(int left, int right) const {
		return left < right;
	}
};

bool LessFun(int left, int right) {
	return left < right;
}

int main() {
	bool (*LessPtr)(int, int) = LessFun;
	LessFunctor lessFunctor;

	cout << lessFunctor(10, 20) << endl;

	cout << LessFun(10, 20) << endl;

	cout << LessPtr(10, 20) << endl;

	return EXIT_SUCCESS;
}
