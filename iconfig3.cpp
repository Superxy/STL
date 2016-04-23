#include <iostream>

using namespace std;

class alloc
{

};

template <typename T, typename Alloc = alloc>
class vector
{
public:
	typedef T valueType;
	typedef valueType * iterator;

	template <typename I>
	void insert(iterator position, I first, I last) { cout << "Insert()" << endl; }
};

int main()
{
	int a[5] = { 1,2,3,4,5 };

	vector<int> v;
	vector<int>::iterator i;

	v.insert(i, a, a+5);  // Insert()


	return 0;

}
