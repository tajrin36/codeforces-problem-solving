#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s1 = "codeforces";
        int Count=0;
        string s2;
        cin>>s2;
        for(int j=0; j<10; j++)
        {
            if(s1[j]!=s2[j])
            {
                Count++;
            }
        }
        cout<<Count<<endl;
    }
    return 0;
}
