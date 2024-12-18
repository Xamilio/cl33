#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int SIZE = 12;
    int arr[SIZE];
    int l;
    cout << "Enter number: ";
    cin >> l;
    arr[0] = l;
    for (int i = 1; i < SIZE; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}

//O(1)
