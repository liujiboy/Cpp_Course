//
//  main.cpp
//  ArrayList
//
//  Created by  刘骥 on 13-10-18.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//
#include "ArrayList.h"

int main(int argc, const char * argv[])
{
    try
	{
		ArrayList l1;
		//inserts elements to the front of l1
		l1.add(0,10);
		l1.add(0,20);
		l1.add(0,30);
		//adds an element to the end of l1
		l1.add(40);
		//displays l1
		cout<<"l1:"<<l1<<endl;
		ArrayList l2(l1);
		//removes an element at index 1
		l2.remove(1);
		//displays l2
		cout<<"l2:"<<l2<<endl;
        //removes the first element
		l2.remove();
		//displays l2
		cout<<"l2:"<<l2<<endl;
		ArrayList l3=l2;
		//displays l3
		cout<<"l3:"<<l3<<endl;
		cout<<"The size of l3 is "<<l3.size()<<endl;
		//returns the first element and assigns 1000 to it
		l3[0]=1000;
		//displays l3
		cout<<"l3:"<<l3<<endl;
		//clear l3
		l3.clear();
        //displays l3
		cout<<"l3:"<<l3<<endl;
		l3.add(1,200);
	}
	catch (runtime_error& e)
	{
		cout<<"Exception："<<e.what()<<endl;
	}
    return 0;
}

