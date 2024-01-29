#include<iostream>
using namespace std;

int main()
{
    long long n,k,partition,output;
    cin>>n>>k;
    if(n%2==0)
    {
        partition=n/2;
    }
    else
    {
        partition=(n/2)+1;
    }
    if(k<=partition)
    {
        output=(2*k)-1;
    }
    else
    {
        output=(k-partition)*2;
    }

    cout<<output<<endl;

    return 0;
    

}