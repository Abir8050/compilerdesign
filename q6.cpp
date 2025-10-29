#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    int min, max;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum value = " << min << endl;
    cout << "Maximum value = " << max << endl;

    return 0;
}

