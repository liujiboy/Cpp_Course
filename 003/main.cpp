#include<iostream>
#include"fun.h"
int main(int argc,char* argv[])
{
	int n;
	std::cout<<"input N:"<<std::endl;
	std::cin>>n;
	move(n,"a","b","c");
	return 0;
}
