/*
 * main.cpp
 *
 *  Created on: Nov 30, 2016
 *      Author: TJ
 */

#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include "LinearHash.h"
#include "QuadraticHash.h"
#include "DoubleHash.h"
#include "LinkedList.h"
#include "SeparateChainingHash.h"
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char * argv[]) {
      
    LinearHash linearHash;
    QuadraticHash quadraticHash;
    DoubleHash doubleHash;
    SeparateChainingHash separateHash; 
    
    int inputs[10]; 
    int input; 
    int size; 
    
    
    for (int i = 0; i < 10; i++ ) {
        inputs[i] = -2;         
    }
    
    
    int index = 0;
    cout << "" << endl;
    while (cin >> input && input != -1) {
        cout << "Input: " << input << endl; 
        
        inputs[index] = input;
        index++ ;
    }
      
/////////////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    cout << "" << endl;
    cout << "Hash Table with Linear Probing" << endl; 
    cout << "" << endl;
    
    for (int k = 0; k < 10; k++) {        
        if (inputs[k] != -2) {
            linearHash.insert(inputs[k]);
        }
    }
    
	for (int a = 0; a < 10; a++) {
        if (linearHash.get(a) == -2) {
            cout << a << endl;
        }
        else {
		    cout << a << "  " << linearHash.get(a) << endl;
        }
	}
/////////////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
    
    cout << "" << endl; 
    cout << "" << endl;
    cout << "Hash Table with Quadratic Probing" << endl; 
    cout << "" << endl; 
    for (int k = 0; k < 10; k++) {        
        if (inputs[k] != -2) {
            quadraticHash.insert(inputs[k]);     
        }
    }
    
    cout << "" << endl;

  	for (int b = 0; b < 10; b++) {
        if (quadraticHash.get(b) == -2) {
            cout << b << endl;
        }
        else {
		    cout << b << "  " << quadraticHash.get(b) << endl;
        }
	} 

/////////////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    cout << "" << endl; 
    cout << "" << endl;
    cout << "Extra Credit: Hash Table with Double Hashing" << endl; 
    cout << "" << endl;

    for (int k = 0; k < 10; k++) {        
        if (inputs[k] != -2) {
            doubleHash.insert(inputs[k]);
        }
    }
    
    cout << "" << endl;

 	for (int c = 0; c < 10; c++) {
        if (doubleHash.get(c) == -2) {
            cout << c << endl;
        }
        else {
		    cout << c << "  " << doubleHash.get(c) << endl;
        }
	} 

/////////////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    cout << "" << endl; 
    cout << "" << endl;
    cout << "Extra Credit: Hash Table with Separate Chaining" << endl; 
    cout << "" << endl; 
    
    for (int k = 0; k < 10; k++) {        
        if (inputs[k] != -2) {
            separateHash.insert(inputs[k]);
        }
    }
    
 	for (int c = 0; c < 10; c++) {
        
        cout << c << "  ";
        
        LinkedList curList = separateHash.get(c); 
        
        node *curr = curList.header;
        
        while (curr->next != NULL) {
            curr = curr->next; 
            cout << "-> " << curr->val << " ";
        }
        
        cout << "->_ " << endl; 

	} 
	
	cout << "" << endl;
}

