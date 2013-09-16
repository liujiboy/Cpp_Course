#include<fstream>
#include"fun.h"
using namespace std;
/*
 *fileName文件名
 *movies从文件中读取的movie
 */
void loadMovie(string fileName,vector<string>& movies)
{
	fstream file(fileName.c_str());
	string line;
	//读取一行文件
	while(getline(file,line))
	{
		movies.push_back(line);
	}
	file.close();
}
