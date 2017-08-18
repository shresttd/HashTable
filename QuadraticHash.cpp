/*
 * QuadraticHash.cpp
 *
 *  Created on: Nov 30, 2016
 *      Author: TJ
 */

#include "QuadraticHash.h"

QuadraticHash::QuadraticHash() {
	for (int i = 0 ; i < 10; i++ ) {
		table[i] = -2;
	}
}

void QuadraticHash::insert(int value)
{
	int key = (value % 10);

	int count = 1;
	while ( table[key] != -2 && count != 11) {
		key = (value + (int)pow(count, 2)) % 10;
		count ++;
	}
	
	if (count != 11) {
        table[key] = value;
    }
    else {
        cout << value << " could not be inserted into Quadratic Hash" << endl;
    }
}

int QuadraticHash::get(int key) {
	int value = table[key];
	return value;
}

void QuadraticHash::remove() {
}

QuadraticHash::~QuadraticHash() {
}

