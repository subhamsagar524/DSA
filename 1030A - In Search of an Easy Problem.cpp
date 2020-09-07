#include <iostream>
using namespace std;

int main()
{
    int n, buffer;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> buffer;
        if(buffer == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

        cout << "EASY" << endl;
    
    return 0;
}