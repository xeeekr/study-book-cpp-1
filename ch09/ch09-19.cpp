#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

template<typename T>
void Print(const T& container, const string& prefix) {
	cout << prefix;
	for (auto i : container) {
		cout << i << ' ';
	}
	cout << endl;
}

template<typename _InputIter>
void Print(_InputIter b, _InputIter e, const string& prefix) {
	cout << prefix;
	for (auto iter = b ; iter != e ; ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
}

template<typename RType, typename AType>
class Ptr_fun_class : public function<RType(AType)> {
	RType (*pf)(AType);
public:
	Ptr_fun_class(RType (*_pf)(AType)) : pf(_pf) {}
	RType operator()(AType n) const {
		return pf(n);
	}
};

template<typename RType, typename AType>
Ptr_fun_class<RType, AType> Ptr_fun(RType (*pf)(AType)) {
	return Ptr_fun_class<RType, AType>(pf);
}

bool Pred(int n) {
	return 30 <= n && n <= 40;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	Print(v, "v : ");

	cout << "30이상 40이하의 원소 개수 : " << count_if(v.begin(), v.end(), Pred) << endl;
	cout << "30이상 40이하가 아닌 원소 개수 : " << count_if(v.begin(), v.end(), not_fn(Ptr_fun(Pred))) << endl;

	return EXIT_SUCCESS;
}
