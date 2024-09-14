#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "Entered marks are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}
