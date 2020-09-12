#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    long long a, b;
    int temp, temp2, result = 0, res[t];
 
    for(int j = 0; j < t; j++)
    {
        cin >> a >> b;
        if(a == b)
            result = 0;
        else
        {
            temp = fabs(a - b);
            temp2 = temp % 10;
            temp /= 10;
            result += temp;
            if(temp2 != 0)
                result++;
        }
 
        res[j] = result;
        result = 0;
    }
 
    for(int i = 0; i < t; i++)
        cout << res[i] << endl;
 
    return 0;
}