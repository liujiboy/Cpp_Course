#include<fstream>
#include"fun.h"
using namespace std;

string* loadMovie(string fileName)
{
	string movies[10];
	fstream file(fileName.c_str());
	string line;
	int i=0;
	while(getline(file,line))
	{
		movies[i++]=line;
		if(i==9)
		{
			break;
		}
	}
	file.close();
	return movies;
}
