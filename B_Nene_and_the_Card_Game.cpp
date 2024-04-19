#include <iostream>
using namespace std;

// function to find repeating elements
int printRepeating(int arr[], int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int index = (arr[i] - 1) % n;
        arr[index] += n;
    }

    for (int i = 0; i < n; i++)
    {
        if (((arr[i] - 1) / n) >= 2)
            counter++;
    }

    return counter;
}
// Driver code
int main()
{
    int test;
    cin >> test;
    while (test > 0)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // Function call
        cout << printRepeating(arr, n) << '\n';

        --test;
    }

    return 0;
}
