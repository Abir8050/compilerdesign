#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    float sum = 0, avg;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    avg = sum / n;

    cout << "Average value of the elements = " << avg << endl;

    return 0;
}
