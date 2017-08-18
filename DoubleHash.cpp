/*
 * DoubleHash.cpp
 *
 *  Created on: Nov 30, 2016
 *      Author: TJ
 */

#include "DoubleHash.h"


DoubleHash::DoubleHash() {

	for (int i = 0 ; i < 10; i++ ) {
		table[i] = -2;
	}
}

void DoubleHash::insert(int value)
{
    
	int key = (value % 10);

   // cout <<"key is: " << key << endl;
    
	int count = 1;
	while ( table[key] != -2 && count != 11) {
		//key = (key + pow(count, 2)) % 10;
      //  cout << "count is : " << count << endl; 
        
		key = (value + (count * (7 - (value % 7) ) ) )   % 10;
        
    //    cout << "key is now: " << key <<endl; 
		count ++;
	}
	
//	cout << "count is outside while: " << count << endl; 
//	cout << "key is outside while : " << key << endl; 
    
	if (count != 11) {
        table[key] = value;
    }
    else {
        cout << value << " could not be inserted into Double Hash" << endl;
    }
}

int DoubleHash::get(int key) {
	int value = table[key];
	return value;
}

void DoubleHash::remove() {
}

DoubleHash::~DoubleHash() {
}
