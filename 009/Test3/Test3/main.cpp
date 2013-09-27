//
//  main.cpp
//  Test3
//
//  Created by  刘骥 on 13-9-22.
//  Copyright (c) 2013年  刘骥. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>
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
    float distance(const Point&p)
    {
        return sqrt((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y));
    }
};
class Triangle {
private:
    Point a;
    Point b;
    Point c;
    float ab;
    float ac;
    float bc;
public:
    Triangle(const Point&p1,const Point&p2
             ,const Point&p3):a(p1),b(p2),c(p3)
    {
        this->ab=a.distance(b);
        this->ac=a.distance(c);
        this->bc=b.distance(c);
        if(ab+ac>bc&&ab+bc>ac&&bc+ac>ab)
        {
            
        }else{
            throw runtime_error("不是三角形");
            
        }
    }
    float getLength()
    {
        
        return ab+ac+bc;
    }
    float getArea()
    {
        float p=this->getLength()/2;
        return sqrt(p*(p-ab)*(p-ac)*(p-bc));
    }
};
int main(int argc, const char * argv[])
{
    Point a(0,0);
    Point b(0,0);
    Point c(0,1);
    try{
        Triangle t(a, b, c);
        cout<<t.getLength()<<endl;
        cout<<t.getArea()<<endl;
    }catch(runtime_error & message)
    {
        cout<<message.what()<<endl;
    }
        return 0;
}

