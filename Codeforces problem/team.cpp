#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int result=0;

    while(t--)
    {


        int Count=0;
        int arr[3];

        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                Count++;
            }
        }

        if(Count>=2)
        {
            result++;
        }
    }
    cout<<result<<endl;

    return 0;
}
