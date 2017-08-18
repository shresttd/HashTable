/*
 * SeparateChainingHash.h
 *
 *  Created on: Dec 1, 2016
 *      Author: TJ
 */

#ifndef SEPARATECHAININGHASH_H_
#define SEPARATECHAININGHASH_H_

#include <iostream>
#include <utility>
#include <string>
using namespace std;
#include <math.h>
#include "LinkedList.h"
#include <cstddef>


class SeparateChainingHash {

private:
public:

	LinkedList *table;
	SeparateChainingHash();
	void insert(int value);
	LinkedList get(int key);
	void remove();
	virtual ~SeparateChainingHash();
};


#endif /* SEPARATECHAININGHASH_H_ */
