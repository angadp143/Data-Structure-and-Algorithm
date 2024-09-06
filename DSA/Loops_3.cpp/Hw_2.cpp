// Print Factorial of a number N

#include <iostream>
using namespace std;

int main()
{
    int N, fact = 1;
    cout << "Enter a number N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }

    cout << "Factorial of  " << N << " is: " << fact << endl;
    return 0;
}
