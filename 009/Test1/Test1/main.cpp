//
//  main.cpp
//  Test1
//
//  Created by  刘骥 on 13-9-22.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
using namespace std;
typedef struct{
    float a;
    float b;
}Complex;
void init(Complex&c,float a,float b)
{
    c.a=a;
    c.b=b;
}
Complex add(const Complex&c1,const Complex&c2)
{
    Complex c;
    c.a=c1.a+c2.a;
    c.b=c1.b+c2.b;
    //init(c,c1.a+c2.a,c1.b+c2.b);
    return c;
}
Complex sub(const Complex&c1,const Complex&c2)
{
    Complex c;
    c.a=c1.a-c2.a;
    c.b=c1.b-c2.b;
    //init(c,c1.a+c2.a,c1.b+c2.b);
    return c;
}
void print(const Complex&c)
{
    cout<<c.a<<"+"<<c.b<<"j"<<endl;
}
int main(int argc, const char * argv[])
{
    Complex c1,c2,c3,c4;
    init(c1,1,2);
    init(c2,5,6);
    c3=add(c1,c2);
    print(c3);
    c4=sub(c1,c2);
    print(c4);
    return 0;
}

