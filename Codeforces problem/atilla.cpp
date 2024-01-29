#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num1;
        cin>>num1;
        string str;
        cin>>str;
        sort(str.begin(),str.end());

        char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char arr2[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        for(int i=0;i<26;i++)
        {
            if(arr[i]==str[num1-1])
            {
                cout<<i+1<<endl;
                break;
            }
            else if(arr2[i]==str[num1-1])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}