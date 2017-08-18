/*
 * DoubleHash.h
 *
 *  Created on: Dec 1, 2016
 *      Author: TJ
 */

#ifndef DOUBLEHASH_H_
#define DOUBLEHASH_H_

#include <iostream>
#include <utility>
#include <string>
using namespace std;
#include <math.h>

class DoubleHash {

private:
    int table[10];

public:

	DoubleHash();
	void insert(int value);
	int get(int key);
	void remove();
	virtual ~DoubleHash();
};

#endif /* DOUBLEHASH_H_ */
