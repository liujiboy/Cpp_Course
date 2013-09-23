#include<iostream>
using namespace std;
int main(int argc,char** argv)
{
	int *a=new int[10];
	for(int i=0;i<10;i++)
	{
		if(i==9)
		{
			a[i]=1000;
			#ifdef DEBUG
			cout<<a[i]<<endl;
			#endif
		}
		else
		{
			a[i]=i;
		}
	}
	return 0;
}
