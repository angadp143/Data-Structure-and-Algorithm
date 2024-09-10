#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0, base = 1, last_digit;

    while (binary > 0)
    {
        last_digit = binary % 10;
        binary = binary / 10;
        decimal += last_digit * base;
        base = base * 2;
    }

    return decimal;
}

int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "The decimal equivalent is: " << decimal << endl;

    return 0;
}
