#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int friends[n];
    for(int i = 0; i < n; i++)
        cin >> friends[i];

    int min_width = 0;
    for(int i = 0; i < n; i++)
        if(friends[i] > h)
            min_width += 2;
        else
            min_width += 1;

    cout << min_width << endl;

    return 0;
}