#include<fstream>
#include"fun.h"
using namespace std;
/*
 *fileName文件名
 *movies从文件中读取的movie
 *movies数组的长度
 *返回值为实际读取的movie数量
 */
int loadMovie(string fileName,string* movies,int n)
{
	fstream file(fileName.c_str());
	string line;
	int i=0;
	//读取一行文件
	while(getline(file,line))
	{
		movies[i++]=line;
		if(i==n)
		{
			break;
		}
	}
	file.close();
	return i;
}
