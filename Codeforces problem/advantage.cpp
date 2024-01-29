#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int mrr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mrr[i]=arr[i];
        }

        sort(mrr,mrr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=mrr[n-1])
            {
                cout<<arr[i]-mrr[n-1]<<" ";
            }
            else
            {
                cout<<arr[i]-mrr[n-2]<<" ";
            }
        }
        cout<<endl;
    }



}