#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p, q, result = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if(q-p > 1)
            result++;
    }

    cout << result << endl;
    
    return 0;
}