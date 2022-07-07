#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0, max = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            sum = sum + arr[j];
            if (max < sum)
            {
                max = sum;
            }
        }
        sum = 0;
    }

    return 0;
}