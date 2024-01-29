#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s1, s2;
    cin >> s1 >> s2;
    for (i = 0; i < s1.size(); i++) // a to A different 32
    {
        if (s1[i] < 92)
        {
            s1[i] += 32;
        }
        if (s2[i] < 92)
        {
            s2[i] += 32;
        }
    }
    if (s1 == s2)
    {
        cout <<"0";
    }
    else
    {
        for (i = 0; i < s1.size(); i++)
        {
            if(s1[i]>s2[i])
            {
                cout<<"1";
                break;
            }
            else if(s1[i]<s2[i])
            {
                cout<<"-1";
                break;
            }
        }
    }
}