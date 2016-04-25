#include <iostream>

#define __SLT_TEMPLATE_NULL template<>

template <class Key>
class hash
{
public:
	void operator()() { std::cout << "hash<T>" << std::endl; }
};

//explicit specialization
__SLT_TEMPLATE_NULL class hash<char>
{
public:
	void operator()() { std::cout << "hash<char>" << std::endl; }
};

//explicit specialization
__SLT_TEMPLATE_NULL class hash<unsigned char>
{
public:
	void operator()() { std::cout << "hash<unsigned char>" << std::endl; }
};

int main()
{
	hash<long> t1;
	hash<char> t2;
	hash<unsigned char> t3;

	t1();
	t2();
	t3();

	return 0;
}


