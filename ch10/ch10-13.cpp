#include <iostream>

template<class Iter>
struct iterator_traits {
	typedef typename Iter::iterator_category iterator_category;
};

struct input_iterator_tag {
};
struct forward_iterator_tag : public input_iterator_tag {
};
struct bidirectional_iterator_tag : public forward_iterator_tag {
};
struct random_access_iterator_tag : public bidirectional_iterator_tag {
};

template<typename T>
class Vector {
public:
	class Iterator {
	public:
		typedef random_access_iterator_tag iterator_category;
		void operator+=(int) {}
	};
	void Push_back(const T& data) {}
	Iterator Begin() { return Iterator(); }
};

template<typename T>
class List {
public:
	class Iterator {
	public:
		typedef bidirectional_iterator_tag iterator_category;
		void operator++() {}
	};
	void Push_back(const T& data) {}
	Iterator Begin() { return Iterator(); }
};

template<typename Iter>
void _Advance(Iter& iter, int n, bidirectional_iterator_tag category_tag) {
	for (int i = 0 ; i < n ; ++i) {
		++iter;
	}
	std::cout << "양방향 반복자 버전의 advance() ++iter 실행" << std::endl;
}

template<typename Iter>
void _Advance(Iter& iter, int n, random_access_iterator_tag category_tag) {
	iter += n;
	std::cout << "임의 접근 반복자 버전의 advance() iter += n 실행" << std::endl;
}

template<typename Iter>
void Advance(Iter& iter, int n) {
	_Advance(iter, n, typename iterator_traits<Iter>::iterator_category());
}

int main() {
	Vector<int> v;
	v.Push_back(10);
	v.Push_back(20);
	v.Push_back(30);

	List<int> lt;
	lt.Push_back(10);
	lt.Push_back(20);
	lt.Push_back(30);

	Vector<int>::Iterator viter(v.Begin());
	List<int>::Iterator liter(lt.Begin());

	Advance(viter, 2);
	Advance(liter, 2);

	return EXIT_SUCCESS;
}
