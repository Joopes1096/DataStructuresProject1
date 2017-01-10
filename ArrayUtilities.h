/*
 * ArrayUtilities.h
 *
 *  Created on: Feb 18, 2013
 *      Author: kamilla
 */

#ifndef ARRAYUTILITIES_H_
#define ARRAYUTILITIES_H_

#include <string>
#include <iosfwd>

void fillArray(
	std::istream& 	io,
	int 			a[],
	const int 		maxSize,
	int& 			actualSize
);

void outputArray(
	std::ostream& 		os,
	const int 			a[],
	const int 			actualSize,
	const std::string& 	info
);

#endif /* ARRAYUTILITIES_H_ */
