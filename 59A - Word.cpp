#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper = 0, lower = 0;
    for(int i = 0; i < s.length(); i++)
        if(islower(s[i]))
            lower++;
        else
            upper++;

    if(upper > lower)
        for (int i = 0; i < s.length(); i++)
            putchar(toupper(s[i]));
    else
        for (int i = 0; i < s.length(); i++)
            putchar(tolower(s[i]));

    return 0;
}