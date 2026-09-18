#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int* values = new int[n];
    cout << "Enter 3 integers: ";

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    cout << "Values: ";

    for (int i = 0; i < n; i++)
    {
        cout << values[i] << " ";
    }

    delete[] values;
    values = nullptr;

    return 0;
}