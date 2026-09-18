#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students (1-10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Invalid size";
        return 0;
    }
    int* marks = new int[n];

    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(marks + i);
    }
    int* newMarks = new int[n + 1];

    for (int i = 0; i < n; i++)
    {
        *(newMarks + i) = *(marks + i);
    }
    cout << "Enter new student's mark: ";
    cin >> *(newMarks + n);
    delete[] marks;
    marks = newMarks;
    n++;
    cout << "Updated marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
    delete[] marks;
    marks = nullptr;

    return 0;
}