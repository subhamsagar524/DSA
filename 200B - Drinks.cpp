#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    double x = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x += temp;
    }

    x /= n;

    printf("%.12lf\n", x);

    return 0;
}