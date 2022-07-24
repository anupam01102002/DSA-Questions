#include <iostream>
using namespace std;

int main()
{
    int arr[] = {30, 40, 50, 10, 20}, pivot = 0, key = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            pivot = i;
        }
    }
    if (key >= arr[0])
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
        for (int i = (pivot + 1); i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << "Not Found";
    return 0;
}