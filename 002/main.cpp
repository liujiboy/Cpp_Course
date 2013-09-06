#include<iostream>
#include"fun.h"
int main(int argc,char* argv[])
{
	for(int i=100;i<=999;i++)
		if(f(i))
			std::cout<<i<<std::endl;
}
