//
//  ArrayList.h
//  ArrayList
//
//  Created by  刘骥 on 13-10-18.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#ifndef ArrayList_ArrayList_h
#define ArrayList_ArrayList_h
#include<iostream>
using namespace std;
typedef int ElemType;
class ArrayList
{private:
	ElemType *elems;  //data elements
	int sizeOfElems;  //size of the data elements
	int sizeOfAllocatedMemory;  //size of allocated memory
    //memory increment used for reallocating memory
    static const int INC=10;
	//reallocates memory when there is no enough space to store //elements
    void reallocate();
public:
	ArrayList(int size=4);  //constructor
	ArrayList(const ArrayList&list); //copy constructor
	~ArrayList();  //destructor
    //returns the size of data elements in this list
	int size() const;
    //adds an element to the list at the position indicated by the index
    void add(int index, ElemType e);
    //adds an element to the end of the list
	void add(ElemType e);
    //removes an element at the specified index in this list
    void remove(int index);
    //removes the first element of the list
	void remove();
    //removes all of the elements from the list
	void clear();
    //returns the element at the specified index in this list
	ElemType& operator[](int index);
    //assigns values of other list to this list
	ArrayList&operator=(const ArrayList&list);
    //outputs the list to a stream
    friend ostream&operator<<(ostream&os,const ArrayList& list);
};


#endif
