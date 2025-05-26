#include <iostream>
 
using namespace std;
 
int main()
{
	long long n1,n2;
cin>>n1>>n2;
	if(n1%n2==0||n2%n1==0)
        cout<<"Multiples"<<endl;
    else
    cout<<"No Multiples"<<endl;
return 0;
}
