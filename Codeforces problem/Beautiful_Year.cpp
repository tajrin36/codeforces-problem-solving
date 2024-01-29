#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;//1987
    while(1)
    {
        year++;
        int first=year/1000;//1
        int b=year/100;//19
        int second=b%10;//9
        int d=year/10;//198
        int third=d%10;//8
        int forth=year%10;//7

        if(first!=second && first!=third && first!=forth && second!=third && second!=forth && third!=forth)
        {
            break;
        }
    }
    cout<<year<<endl;

    return 0;

}
