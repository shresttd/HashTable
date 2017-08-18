/*
 * LinkedList.h
 *
 *  Created on: Dec 1, 2016
 *      Author: TJ
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <cstddef>


struct node
{
    int val;
    node *next;
};

class LinkedList {
    
public:
    node* header;
	LinkedList();
	void insert(int value);

};

#endif /* LINKEDLIST_H_ */
