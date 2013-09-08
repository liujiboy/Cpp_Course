#include<iostream>
#include<string>
void move(int n,std::string a,std::string b,std::string c)
{
	if(1!=n)
	{
		move(n-1,a,c,b);
		std::cout<<"move "<<n<<" from "<<a<<" to "<<c<<std::endl;
		//printf("move %d from %s to %s",n,a,c);
		move(n-1,b,a,c);
	}else{
		std::cout<<"move "<<n<<" from "<<a<<" to "<<c<<std::endl;
	}
}
