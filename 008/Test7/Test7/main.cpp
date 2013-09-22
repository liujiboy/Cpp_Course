//
//  main.cpp
//  Test7
//
//  Created by  刘骥 on 13-9-16.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
using namespace std;
void fun(int n,int** retVal)
{
    int* a=new int[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    *retVal=a;
}
int main(int argc, const char * argv[])
{
    int* a=NULL;
    int n;
    cout<<"input length of array:";
    cin>>n;
    fun(n,&a);
    cout<<a<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    delete []a;
    return 0;
}
