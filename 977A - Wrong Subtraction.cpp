#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int rem;
    for(; k > 0; k--)
    {
        rem = n % 10;
        if(rem != 0)
            n--;
        else
            n /= 10;
    }

    cout << n << endl;
    
    return 0;
}