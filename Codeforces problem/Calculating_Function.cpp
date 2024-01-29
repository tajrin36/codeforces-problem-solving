#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    if(n%2==0)
    {
        long long ans=(n/2);
        cout<<ans<<endl;
    }
    else
    {
        long long ans2=((n+1)/2)*(-1);
        cout<<ans2<<endl;
    }

    return 0;
}