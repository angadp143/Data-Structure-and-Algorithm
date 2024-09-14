// wap to cal. sum & product of all numbers in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;
    int product = 1;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];     
        product *= arr[i]; 
    }

    cout << "Sum of elements: " << sum << endl;
    cout << "Product of elements: " << product << endl;

    return 0;
}
