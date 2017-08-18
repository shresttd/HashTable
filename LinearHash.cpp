/*
 * LinearHash.cpp
 *
 *  Created on: Nov 30, 2016
 *      Author: TJ
 */

#include "LinearHash.h"


LinearHash::LinearHash() {

	for (int i = 0 ; i < 10; i++ ) {
		table[i] = -2;
	}
}

void LinearHash::insert(int value)
{
	int key = (value % 10);

	while ( table[key] != -2 ) {
		//key = (value + 1) % 10;
		key = (key + 1) % 10;
	}
	table[key] = value;
}

int LinearHash::get(int key) {
	int value = table[key];
	return value;
}

void LinearHash::remove() {
}

LinearHash::~LinearHash() {

}








/*#include <iostream>
#include <utility>
#include <string>
#include <std = c++11>
using namespace std;

class LinearHash {
public:

	int table;
	const int 10 = 10;

	LinearHash() {
		table = new int [10];
		for (int i = 0; i < 10; i++ ) {
					table[i] = -1;
		}
	}

	void insert(int value) {
		int key = (value % 10);

		while (table[key] != -1 ) {
			key = (value + 1) % 10;
		}
		table[key] = value;
	}

	int get(int key) {
		return table[key] ;
	}

	void remove() {
	}

	~LinearHash() {
	}
};

int main() {
	LinearHash LinearHash = new LinearHash();
	LinearHash.insert(5);

	cout << x <<;
} */

