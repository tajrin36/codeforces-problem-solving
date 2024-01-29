#include<iostream>
using namespace std;
int main()
{
    int num,Count=0;
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            Count++;
            break;
        }
    }
    if(Count==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

