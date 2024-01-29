#include<iostream>
using namespace std;
int main()
{
    int num,Count=0;
    cin>>num;
    string s;
    cin>>s;
    for(int i=0;i<num;i++)
    {
        if(s[i]==s[i+1])
        {
            Count++;
        }
    }
    cout<<Count<<endl;

    return 0;
}
