#include <iostream>
#include <cstddef>

using namespace std;

/*
 *  non-static data members shall be initialized in the order they were declared in the class definition
 *  Finally, the compound-statement of the constructor body is executed.
 * */

class alloc
{

};

template <typename T, typename Alloc = alloc, size_t Bufsiz = 0>
class deque
{
public:
	deque() { cout << "deque()" << endl; }
};


//根据前一个参数T，设定下一个参数Sequence的默认值为deque<T>
template <typename T, typename Sequence = deque<T> >
class stack
{
public:
	stack() { cout << "stack()" << endl; }
private:
	Sequence c;
};


int main()
{
	stack<int> x; //deque()
		      //stack()

	return 0;
}
