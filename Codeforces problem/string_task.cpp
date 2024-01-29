#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string Final="";
    for(int i=0;i<s.size();i++)
    {
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' )
        {
            continue;
        }
        else
        {
           Final=Final+".";
           Final=Final+ch;
        }
    }
    cout<<Final<<endl;

    return 0;
}


