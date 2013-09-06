bool f(int x)
{
	int a=x/100;
	int b=x/10%10;
	int c=x%10;
	if(a*a*a+b*b*b+c*c*c==x)
		return true;
	else
		return false;
}
