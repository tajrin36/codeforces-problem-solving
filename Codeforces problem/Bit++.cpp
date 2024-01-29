#include<iostream>
using namespace std;

int main()
{
    string s;
    int n;
    int Count=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s == "++X" || s == "X++" )
        {
           Count++;
        }
        else if(s == "--X" || s == "X--")
        {
            Count--;
        }
    }
    cout<<Count<<endl;

    return 0;
}
