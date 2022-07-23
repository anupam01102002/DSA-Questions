#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, min;
    cout<<"Enter the no. of Childrens\n";
    cin >> m;
    int arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int i = 0, j = m-1;
    while (j < n)
    {
        if ((arr[j] - arr[i]) < min)
        {
            min = (arr[j] - arr[i]);
        }
        j++;
        i++;
    }
    cout << min;
    return 0;
}