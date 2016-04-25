#include <iostream>


template <class T>
class plus
{
public:
	T operator()(const T&x, const T&y) const { return x+y; }
};

template <class T>
class minus
{
public:
	T operator()(const T&x, const T&y) const { return x-y; }
};

int main()
{
	plus<int> plusobj;
	minus<int> minusobj;
	std::cout << plusobj(3,5) << std::endl; // 8
	std::cout << minusobj(3,5) << std::endl; // -2
	return 0;
}
