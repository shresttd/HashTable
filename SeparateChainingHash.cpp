/*
 * SeparateChainingHash.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: TJ
 */

#include "SeparateChainingHash.h"


SeparateChainingHash::SeparateChainingHash() {

	table = new LinkedList[10];
    
    //LinkedList[10] table; 

	/*for (int i = 0 ; i < 10; i++ ) {
		table[i] = NULL;
	}*/
}

void SeparateChainingHash::insert(int value)
{
	int key = (value % 10);

    table[key].insert(value);  

}

LinkedList SeparateChainingHash::get(int key) {
	LinkedList list = table[key];
	return list;
}

void SeparateChainingHash::remove() {
}

SeparateChainingHash::~SeparateChainingHash() {

}
