#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 1, 2}, pivot = 0, key = 4;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            pivot = i;
        }
    }
    if (key > arr[0])
    {
        for (int i = 0; i <= pivot; i++)
        {
            if (arr[i] == key)
            {
                cout << i;
                return 0;
            }
        }
    }
    else
    {
        for (int i = (pivot + 1); i < 5; i++)
        {
            if (arr[i] == key)
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << "-1";
    return 0;
}