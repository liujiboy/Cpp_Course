//
//  main.cpp
//  Test5
//
//  Created by  刘骥 on 13-9-11.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    while(true) {
        int *a=new int[10];
        //试试把delete删除
        delete []a;
    }
    return 0;
}

