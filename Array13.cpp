#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int array_original[N], array_reversed[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array_original[i];
    }
    int j = 0, i = (N - 1);
    while (j < N)
    {
        array_reversed[j] = array_original[i];
        j = j + 1;
        i = i - 1;
    }
    for (int i = 0; i < N; i++)
    {
        cout << array_reversed[i] << " ";
    }
    return 0;
}