//
//  main.cpp
//  Test1
//
//  Created by  刘骥 on 13-9-11.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{

    int a=10;
    int* address=&a;
    cout<<"varialble a is stored at memory address:"<<address<<endl;
    cout<<"varialble address is stored at memory address:"<<&address<<endl;
    cout<<"the value of memory address:"<<address<<" is "<<*address<<endl;
    cout<<"the value of memory address:"<<&address<<" is "<<address<<endl;
    return 0;
}

