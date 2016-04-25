#include <iostream>
using namespace std;

class INT
{
private:
	int m_int;
public:
	INT(int i = 0) : m_int(i) {}
	friend ostream& operator<< (ostream &os, const INT &x);
	// prefix way
	INT& operator++()
	{
		++m_int;
		return *this;
	}

	//postfix way
	INT operator++(int)
	{
		INT I(this->m_int);
		++(*this);
		return I;
	}

	//prefix way
	INT& operator--()
	{
		--m_int;
		return *this;
	}

	//postfix way
	INT operator--(int)
	{
		INT I(this->m_int);
		--(*this);
		return I;
	}

	int&  operator*()
	{
		return (int&)m_int;
	}
};

ostream& operator<< (ostream &os, const INT &x)
{
	cout << "[" << x.m_int << "]" << endl;
	return os;
}

int main()
{
	INT I(5);
	cout << I++;//[5]
	cout << ++I;//[7]
	cout << I--;//[7]
	cout << --I;//[5]
	cout << *I;// 5
	return 0;
}
