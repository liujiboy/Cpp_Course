#include<iostream>
#include"fun.h"
using namespace std;
int main(int argc,char* argv[])
{
	string movies[10];
	int num=loadMovie("data.csv",movies,10);
	for(int i=0;i<num;i++)
		cout<<movies[i]<<endl;
	return 0;

}
