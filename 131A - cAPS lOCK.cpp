#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string word;
    cin >> word;
    
    char result[word.length()];
    int flag = 0, donotconvertflag = 0;
    for(int i = 1; i < word.length(); i++)
        if(islower(word[i]))
            donotconvertflag++;

    if(islower(word[0]) && isupper(word[1]) && donotconvertflag == 0)
    {
        for(int i = 0; i < word.length(); i++)
            if(i == 0)
                result[i] = toupper(word[i]);
            else
                result[i] = tolower(word[i]);
        flag++;
    }

    if(isupper(word[0]) && isupper(word[1]) && donotconvertflag == 0)
    {
        for(int i = 0; i < word.length(); i++)
            result[i] = tolower(word[i]);
        flag++;
    }

    if(word.length() == 1 && isupper(word[0]))
    {
        result[0] = tolower(word[0]);
        flag++;
    }

    if(word.length() == 1 && islower(word[0]))
    {
        result[0] = toupper(word[0]);
        flag++;
    }

    if(flag == 0)
        for(int i = 0; i < word.length(); i++)
            result[i] = word[i];
    
    for(int i = 0; i < word.length(); i++)
        cout << result[i];

    cout << endl;

    return 0;
}