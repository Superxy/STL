#include <iostream>
using namespace std;

template <typename T>
class testClass
{
public:
	static int _data;
};


// 为static data member 进行定义（分配内存），并设初值
// template version
template<typename T>
int testClass<T>::_data = 1;
//non-template version
//template parameter list matching the non-templated nested type 'testClass<char>' should be empty ('template<>')
template<>
int testClass<char>::_data = 2;


int main()
{
	cout << testClass<int>::_data << endl;      //  1
	cout << testClass<char>::_data << endl;     //  2

	testClass<int> obji1, obji2;
	testClass<char> objc1, objc2;

	cout << obji1._data << endl;//1	
	cout << obji2._data << endl;//1 
	cout << objc1._data << endl;//2
	cout << objc2._data << endl;//2

	obji1._data = 3;
	objc2._data = 4;


	cout << obji1._data << endl;//3	
	cout << obji2._data << endl;//3 
	cout << objc1._data << endl;//4
	cout << objc2._data << endl;//4

	return 0;
}
