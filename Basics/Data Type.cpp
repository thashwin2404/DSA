#include <iostream>
using namespace std;
int dataTypes(string type) {
	if(type=="Long" || type=="Double")
	{
		return 8;
	}
	else if(type=="Integer" || type=="Float")
	{
		return 4;
	}
	else
	{
		return 1;
	}
}
int main()
{
	string x;
	cin>>x;
	cout<<dataTypes(x);
}
