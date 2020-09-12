#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, data[1000];
    cin >> n >> m;
    
    for (int i = 0; i < m; i++)
        cin >> data[i];

    sort(data, data + m);

    int result = data[n - 1] - data[0];
    
    for (int i = 1; i <= m - n; i++)
        if (data[i + n - 1] - data[i] < result)
            result = data[i + n - 1] - data[i];
    
    cout << result << endl;
    
    return 0;
}