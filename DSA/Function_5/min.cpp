#include <iostream>
using namespace std;

int minofTwo(int a, int b)   //parameters
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "min = " << minofTwo(11, 21) << endl;  //arguments
    return 0;
}