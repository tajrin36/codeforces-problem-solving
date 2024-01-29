#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int Count=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            Count++;
        }
    }
    if(Count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;


}
