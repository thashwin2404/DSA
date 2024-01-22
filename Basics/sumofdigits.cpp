#include<iostream>
using namespace std;

int main() {
	int odd=0;
	int even=0;
	int n;
    int m;
    int temp;
	cin>>n;
    m=n;
	while(m!=0)
    {
        temp=m%10;
        m=m/10;
        if(temp%2==0)
        {
            even=even+temp;
        }
        else
        {
            odd+=temp;
        }
    }
   cout << even << " " << odd << std::endl;
}
