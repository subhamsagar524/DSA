#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    string rev;
    rev = string(s.rbegin(), s.rend());

    if(rev == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}