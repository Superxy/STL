#include <iostream>

using namespace std;

template <class T>
class testClass
{
public:
	static const int data1 = 5;
	static const long data2 = 3L;
	static const char data3 = 'c';
};

int main()
{
	cout << testClass<int>::data1 << endl;
	cout << testClass<int>::data2 << endl;
	cout << testClass<int>::data3 << endl;
	return 0;
}
