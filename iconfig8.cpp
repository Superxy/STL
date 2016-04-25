#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
class print
{
public:
	void operator() (const T& elem) { cout << elem << ' '; }
};

int main()
{
	int a[6] = { 0,1,2,3,4,5 };
	vector<int> v(a,a+6);

	//print<int> ()  temporary object
	print<int> ()(2);

	return 0;
}
