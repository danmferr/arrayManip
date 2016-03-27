#ifndef H_MyArray
#define H_MyArray

#include <iostream>
using namespace std;

class myArray
{
public:
		myArray(int);
	myArray(int, int);
	~myArray();

	int&operator[](int);
	int operator[](int)const;

private:
	int size;
	int startIndex;

	int*ptr;
};
#endif