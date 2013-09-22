//
//  main.cpp
//  Test3
//
//  Created by  刘骥 on 13-9-22.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
private:
    float x;
    float y;
    
public:
    Point(float x=0,float y=0)
    {
        this->x=x;
        this->y=y;
    }
    Point(const Point&p)
    {
        this->x=p.x;
        this->y=p.y;
    }
    
};
class Triangle {
private:
    Point a;
    Point b;
    Point c;
    
public:
    Triangle(const Point&p1,const Point&p2
             ,const Point&p3):a(p1),b(p2),c(p3)
    {
       
    }
};
int main(int argc, const char * argv[])
{
    
    return 0;
}

