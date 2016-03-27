#include <iostream>
#include "MyArray.h"
using namespace std;

myArray::myArray (int si, int s)
{
	startIndex=-si;
	size=s;

	ptr=new int[size+startIndex];
	for (int i = 0; i <(s+startIndex); i++)
		ptr[i]=0;
}
	myArray::myArray( int s )
	{
		startIndex=0;
		size=s;
		ptr=new int[size+startIndex];
	for (int i = 0; i <(s+startIndex); i++)
		ptr[i]=0;
	}

	int &myArray::operator[](int subscript)
	{
		if (subscript<-startIndex||subscript>=size)
		{
			cerr <<"/nError:Subscript"<<subscript
				<< "out of range"<< endl;
			exit (1);
		}
		return ptr [subscript+startIndex];
	}
		int myArray::operator[](int subscript) const
		{
			if (subscript< -startIndex||subscript>=size)
			{
			cerr <<"/nError:Subscript"<<subscript
				<< "out of range"<< endl;
			exit (1);
		}
			return ptr [subscript +startIndex];
		}