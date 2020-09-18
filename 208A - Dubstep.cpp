#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        string temp = input.substr(i, 3);
        if(temp == "WUB")
            for(int j = 0; j < 3; j++)
                input[i+j] = ' ';
    }

    stringstream ss(input);
    string word, result;

    while(ss >> word)
    {
        if(!result.empty())
            result += ' ';
        result += word;
    }

    cout << result << endl;

    return 0;
}