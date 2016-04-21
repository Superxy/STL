#include <iostream>

using namespace std;

//һ�㻯���
template<typename I, typename O>
class testClass
{
public:
	testClass() { cout << "I, O" << endl; }
};

//���⻯���
template<typename T>
class testClass<T*, T*>
{
public:
	testClass() { cout << "T*, T*" << endl; }
};

//���⻯���
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
