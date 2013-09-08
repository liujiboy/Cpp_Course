#include<iostream>
#include"fun.h"
using namespace std;
int main(int argc,char* argv[])
{
	A::f();
	B::f();
	cout<<"std::cout"<<endl;
	return 0;
}
