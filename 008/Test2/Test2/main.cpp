//
//  main.cpp
//  Test2
//
//  Created by  刘骥 on 13-9-11.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
void doNothing(vector<int> v) {
    cout<<"do nothing"<<endl;
}
int main(int argc, const char * argv[]) {
    vector<int> v;
    for(int i=0;i<10000;i++)
        for(int j=0;j<10000;j++)
            v.push_back(0);
    doNothing(v);
    return 0;
}

