#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int magnets[n], breaks = 1;
    for(int i = 0; i < n; i++)
        cin >> magnets[i];

    for(int i = 0; i < n-1; i++)
        if(magnets[i] != magnets[i+1])
            breaks++;

    cout << breaks << endl;

    return 0;
}