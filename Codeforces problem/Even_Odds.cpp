/*#include <iostream>
using namespace std;

int main()
{
    int n,k,result;
    cin>>n>>k;



    if (k <= n)
    {

         result = 2 * k - 1;
    }
    else
    {

         result = 2 * (k - n);
    }

    cout<<result<<endl;

    return 0;
}
*/

#include <iostream>

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the position k: ";
    std::cin >> k;

    int result;
    if (k <= n) {
        // If k is less than or equal to n, it's an odd number.
        result = 2 * k - 1;
    } else {
        // If k is greater than n, it's an even number.
        result = 2 * (k - n);
    }

    std::cout << "The number at position " << k << " is: " << result << std::endl;

    return 0;
}

