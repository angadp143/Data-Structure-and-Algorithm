#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Char=";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else
    {
        cout << "Uppercase";
    }

    return 0;
}