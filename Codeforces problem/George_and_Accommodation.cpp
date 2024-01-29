#include<iostream>
using namespace std;
int main()
{
    int p,q;
    int t;
    int count=0;
    cin>>t;
    while(t--)
    {
        
        
        cin>>p>>q;

        
        if(q-p>=2)
        {
            count++;
        }
        
        
    }
    cout<<count<<endl;
}