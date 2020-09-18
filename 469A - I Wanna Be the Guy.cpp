#include <iostream>
using namespace std;

int main()
{
    int n, p, q, flag = 0;

    cin >> n >> p;
    int parr[p];    for(int i = 0; i < p; i++)  cin >> parr[i];

    cin >> q;
    int qarr[q];    for(int i = 0; i < q; i++)  cin >> qarr[i];

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < p; j++)
            if(parr[j] == i)
                flag = 1;
        
        for(int k = 0; k < q; k++)
            if(qarr[k] == i)
                flag = 1;

        if(flag == 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }

        flag = 0; 
    }

    cout << "I become the guy." << endl;

    return 0;
}