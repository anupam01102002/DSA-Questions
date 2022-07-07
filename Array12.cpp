#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    for (int j = 0; j < N; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
        if (min > arr[j])
        {
            min = arr[j];
        }
    }

    cout << max << endl
         << min << endl;
    return 0;
}