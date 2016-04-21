#include <iostream>

using namespace std;

/*
 *	1. template class can have more than 1 typename
 *	2. if the typename has default value, we can get rid of it in template class declaration
 *	eg:
 *		template <typename T, typename Alloc = alloc>
 *		class vector
 *		{};
 *
 *		vector<int> obj;
 * */

class alloc
{

};

template<typename T,typename Alloc = alloc>
class vector
{
public:
	void swap(vector<T, Alloc> &v) { cout << "swap()" << endl; } 
};

template<typename T,typename Alloc>
void swapp(vector<T, Alloc> &x, vector<T, Alloc> &y)
{
	x.swap(y);
}

int main()
{
	vector<int> x,y;
	swapp(x,y);


	return 0;
}
