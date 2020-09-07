#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        if(n % 2 == 0)
            cout << "I love it " << endl;
        else
            cout << "I hate it " << endl;
        return 0;
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(i == n)
            if(i % 2 == 0)
                cout << "I love it " << endl;
            else
                cout << "I hate it " << endl;
        else if(i % 2 == 0)
                cout << "I love that ";
            else
                cout << "I hate that ";
    }
    return 0;
}