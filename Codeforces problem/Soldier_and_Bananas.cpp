#include<iostream>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    int result=sum-n;


    if(result<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }

    return 0;
}
