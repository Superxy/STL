#include <iostream>

using namespace std;

template <typename T>
T square(T x)
{
	return x*x;
}

template <typename T>
class Vector
{
private:
	T arr[1000];
	int size;
public:
	Vector(int s=0);
	void print();// { for(int i=0; i<size; i++) cout << arr[i] << endl; }
	void push(T element) { arr[size] = element; size++; }
	int getSize() const { return size; }
	T getElement(int i) const { return arr[i]; }
};

template <typename T>
Vector<T>::Vector (int s) : size(s)
{

}

template <typename T>
void Vector<T>::print()
{
	for(int i=0; i<size; i++)
		cout << arr[i] << endl;
}

template <typename T>
Vector<T> operator *(const Vector<T> &v1, const Vector<T> &v2)
{
	Vector<T> v;
	for(int i=0; i<v1.getSize(); i++)
	{
		v.push(v1.getElement(i) * v2.getElement(i));
	}
	return v;
}

int main()
{
	Vector<int> v;
	v.push(4);
	v.push(7);
	v.push(8);
	v.push(9);
	Vector<int> v1;
	v1 = square(v);
	v1.print();

	return 0;
}
