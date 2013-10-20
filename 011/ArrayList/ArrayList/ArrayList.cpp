//
//  ArrayList.cpp
//  ArrayList
//
//  Created by  刘骥 on 13-10-18.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include "ArrayList.h"
ArrayList::ArrayList(int size)
{
	elems=new ElemType[size];
	sizeOfElems=0;
	sizeOfAllocatedMemory=size;
}
ArrayList::ArrayList( const ArrayList&list )
{
	elems=new ElemType[list.sizeOfAllocatedMemory];
	sizeOfAllocatedMemory=list.sizeOfAllocatedMemory;
	sizeOfElems=list.sizeOfElems;
	/*for(int i=0;i<list.sizeOfElems;i++)
		elems[i]=list.elems[i];*/
    memcpy(elems, list.elems, list.sizeOfElems*sizeof(ElemType));
}
ArrayList::~ArrayList(void)
{
	delete []elems;
}
int ArrayList::size() const
{
	return sizeOfElems;
}
void ArrayList::reallocate()
{
	int newSizeOfAllocatedMemory=sizeOfAllocatedMemory+INC;
	ElemType *newElems=new ElemType[newSizeOfAllocatedMemory];
	/*for(int i=0;i<sizeOfElems;i++)
	{
		newElems[i]=elems[i];
	}*/
    memcpy(newElems, elems, sizeOfElems*sizeof(ElemType));
	delete []elems;
	elems=newElems;
	sizeOfAllocatedMemory=newSizeOfAllocatedMemory;
}
void ArrayList::add( int index, ElemType e )
{
	if(index>sizeOfElems||index<0)
	{
		throw runtime_error("Index out of bounds!");
	}
	int newSizeOfArray=sizeOfElems+1;
	if(sizeOfAllocatedMemory<newSizeOfArray)
	{
		reallocate();
	}
	for(int i=sizeOfElems-1;i>=index;i--)
	{
		elems[i+1]=elems[i];
	}
	elems[index]=e;
	sizeOfElems=newSizeOfArray;
}
void ArrayList::add( ElemType e )
{
	add(this->sizeOfElems,e);
}
void ArrayList::remove( int index )
{
	int newSizeOfElems=sizeOfElems-1;
	if(index>newSizeOfElems||index<0)
	{
		throw runtime_error("index out of bounds!");
	}
	if(sizeOfElems==0)
	{
		throw runtime_error("There is no element to remove!");
	}
	for(int i=index;i<newSizeOfElems;i++)
	{
		elems[i]=elems[i+1];
	}
	sizeOfElems=newSizeOfElems;
}
void ArrayList::remove()
{
	remove(0);
}
void ArrayList::clear()
{
	sizeOfElems=0;
}
ElemType& ArrayList::operator[]( int index )
{
	if(index>sizeOfElems-1||index<0)
	{
		throw runtime_error("Index out of bounds");
	}
	return elems[index];
}
ArrayList& ArrayList::operator=( const ArrayList&list )
{
	delete []elems;
	elems=new ElemType[list.sizeOfAllocatedMemory];
	sizeOfAllocatedMemory=list.sizeOfAllocatedMemory;
	sizeOfElems=list.sizeOfElems;
	/*for(int i=0;i<list.sizeOfElems;i++)
		elems[i]=list.elems[i];*/
    memcpy(elems, list.elems, list.sizeOfElems*sizeof(ElemType));
	return *this;
}
ostream&operator<<(ostream&os,const ArrayList& list)
{
	for(int i=0;i<list.size();i++)
		cout<<list.elems[i]<<"\t";
	return os;
}
