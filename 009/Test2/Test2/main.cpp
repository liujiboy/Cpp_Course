//
//  main.cpp
//  Test2
//
//  Created by  刘骥 on 13-9-22.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
using namespace std;
class Complex {
private:
    float a;
    float b;
public:
    Complex(float a,float b)
    {
        this->a=a;
        this->b=b;
    }
    Complex()
    {
        this->a=0;
        this->b=0;
    }
    //拷贝构造函数
    Complex(const Complex&c)
    {
        this->a=c.a;
        this->b=c.b;
    }
    Complex add(const Complex&c2)
    {
        Complex c;
        c.a=this->a+c2.a;
        c.b=this->b+c2.b;
        return c;
    }
    Complex sub(const Complex&c2)
    {
        Complex c;
        c.a=this->a-c2.a;
        c.b=this->b-c2.b;
        return c;
    }
    void print()
    {
        cout<<this->a<<"+"<<this->b<<"j"<<endl;
    }
};
int main(int argc, const char * argv[])
{

    Complex c1(1,2);
    c1.print();
    Complex c2(c1);
    c2.print();
    Complex c3=c1.add(c2);
    c3.print();
    return 0;
}

