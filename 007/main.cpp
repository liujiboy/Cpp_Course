#include<iostream>
#include"fun.h"
using namespace std;
int main(int argc,char* argv[])
{
	vector<string> movies;
	//思考此处为什么要用指针？
	loadMovie("data.csv",movies);
	for(int i=0;i<movies.size();i++)
		cout<<movies[i]<<endl;
	return 0;

}
