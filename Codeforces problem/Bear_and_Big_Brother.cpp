#include<iostream>
using namespace std;
int main()
{

    int a,b,Count=0;
    cin>>a>>b;

    for(int i=0;; i++)
    {
        a=a*3;
        b=b*2;
        Count++;

        if(a>b)
        {
            cout<<Count<<endl;
            break;

        }
    }

    return 0;
}

/*while(1)
    {


        a=a*3;
        b=b*2;
        Count++;

        if(a>b)
        {
            cout<<Count<<endl;
            break;

        }
    }*/
