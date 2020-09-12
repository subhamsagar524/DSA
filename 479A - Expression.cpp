#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int result = 0, sum = 0;

    sum = a + b * c;
    if(result < sum)
        result = sum;
    
    sum = a * b + c;
    if(result < sum)
        result = sum;

    sum = a * (b + c);
    if(result < sum)
        result = sum;

    sum = a * b * c;
    if(result < sum)
        result = sum;

    sum = a + b + c;
    if(result < sum)
        result = sum;

    sum = (a + b) * c;
    if(result < sum)
        result = sum;
    
    cout << result << endl;

    return 0;
}