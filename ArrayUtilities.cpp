/*
 * ArrayUtilities.cpp
 *
 *  Created on: Feb 18, 2013
 *      Author: kamilla
 */
#include <iostream>
#include <cassert>

#include "ArrayUtilities.h"

using namespace std;

void fillArray(istream& io, int a[], const int maxSize, int& actualSize)
{
   int temp,i=0;
   io>>temp;
   while (temp!=-999)
   {
	   assert(i<maxSize);
	   a[i++]=temp;
       io>>temp;
   }
   actualSize=i;
}

void outputArray(ostream& os,
		        const int a [],
		        const int actualSize,
		        const string& info )
{
	os<<info<<"\n";
	for (int i=0;i<actualSize;++i)
	{
		os<<a[i]<<" ";
	}
	os<<"\n";
}
