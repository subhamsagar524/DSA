#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int max = 0, count = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            if(count > max)
                max = count;
            count = 1;
        }
        else
            count++;
    }
    
    if(count > max)
        max = count;
    
    cout << max << endl;

    return 0;
}