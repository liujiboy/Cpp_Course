#include<iostream>
#include"fun.h"
using namespace std;
int main(int argc,char* argv[])
{
	string* movies=loadMovie("data.csv");
	for(int i=0;i<10;i++)
		cout<<movies[i]<<endl;
	return 0;

}
