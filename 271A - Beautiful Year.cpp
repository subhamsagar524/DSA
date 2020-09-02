#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int y;
    cin >> y;

    int split[4];
    
    while(true)
    {
        y += 1;
        split[0] = y/1000;      //first number
        split[1] = y/100 % 10;  //second number
        split[2] = y/10 % 10;   //third number
        split[3] = y % 10;      //fourth number

        if(split[0] != split[1] && split[0] != split[2] && split[0] != split[3] &&
        split[1] != split[2] && split[1] != split[3] && split[2] != split[3])
        {
            cout << y << endl;
            return 0;
        }
    }

    return 0;
}