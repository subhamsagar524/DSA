#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[n];
    cin >> s;

    int anton, danik;
    anton = danik = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
            anton++;
        if(s[i] == 'D')
            danik++;
    }

    if(anton > danik)
        cout << "Anton" << endl;
    else if(anton < danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    
    return 0;
}