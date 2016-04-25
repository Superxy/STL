#include <iostream>
#include <cstddef>

class alloc 
{

};

template <class T, class Alloc = alloc, size_t BufSiz = 0>
class deque
{
public:
	deque() { std::cout << "deque" << std::endl; }
};

template <class T, class Sequence = deque<T> >
class stack
{
public:
	stack() { std::cout << "stack" << std::endl; }
private:
	Sequence c;
	template<class T1, class Sequence1>
	friend bool operator== (const stack<T1, Sequence1>&, const stack<T1, Sequence1> &);
	template<class T1, class Sequence1>
	friend bool operator< (const stack<T1, Sequence1>&, const stack<T1, Sequence1>&);  
};

template <class T, class Sequence>
bool operator== (const stack<T, Sequence>&x, const stack<T, Sequence>&y)
{
	return std::cout << "opertor == " << std::endl;
}

template <class T, class Sequence>
bool operator < (const stack<T, Sequence> &x, const stack<T, Sequence> &y)
{
	return std::cout << "operator <" << std::endl;
}

int main()
{
	stack<int> x; // deque stack
	stack<int> y; // deque stack

	std::cout << (x == y) << std::endl; // operator == 1
	std::cout << (x < y) << std::endl; // operator < 1

	stack<char> y1;
//	std::cout << (x == y1) << std::endl;
//	invalid operands to binary experssion ('stack<int>' and 'stack<char>')
}




