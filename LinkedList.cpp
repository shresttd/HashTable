/*
 * LinkedList.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: TJ
 */

#include "LinkedList.h"

LinkedList:: LinkedList() {
    header = new node();
}

void LinkedList::insert(int value) {
    node * newNode = new node();
    
    newNode->val = value;
    newNode->next = NULL; 
    
    node *temp = header->next;
    header->next = newNode;
    newNode->next = temp;

}


