/*
 * LinearHash.h
 *
 *  Created on: Nov 30, 2016
 *      Author: TJ
 */

#ifndef LINEARLinearHash_H_
#define LINEARLinearHash_H_
#include <iostream>
#include <utility>
#include <string>
using namespace std;

class LinearHash {

private:
    int table[10];

public:
	//const static int table_size = 10;

	LinearHash();
	void insert(int value);
	int get(int key);
	void remove();
	virtual ~LinearHash();
};

#endif /* LINEARLinearHash_H_ */
