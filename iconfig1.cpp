#include <iostream>

using namespace std;

//一般化设计
template<typename I, typename O>
class testClass
{
public:
	testClass() { cout << "I, O" << endl; }
};

//特殊化设计
template<typename T>
class testClass<T*, T*>
{
public:
	testClass() { cout << "T*, T*" << endl; }
};

//特殊化设计
template<typename T>
class testClass<const T*, T*>
{
public:
	testClass() { cout << "const T*, T*" << endl; }
};

int main()
{
	testClass<int, char> obj1;  //I, O
	testClass<int*, int*> obj2; //T*, T*
	testClass<const int*, int*> obj3; // const T*, T*
	return 0;
}
