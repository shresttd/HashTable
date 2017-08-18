/*
 * QuadraticHash.h
 *
 *  Created on: Nov 30, 2016
 *      Author: TJ
 */

#ifndef QuadraticHash_H_
#define QuadraticHash_H_
#include <iostream>
#include <utility>
#include <string>
using namespace std;
#include <math.h>

class QuadraticHash {

private:
    int table[10];

public:

	QuadraticHash();
	void insert(int value);
	int get(int key);
	void remove();
	virtual ~QuadraticHash();
};

#endif /* QuadraticHash_H_ */
