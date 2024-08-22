#include <bits/stdc++.h>
using namespace std;

void shiftNegative(int arr[], int n) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {-1, 2, -9, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    shiftNegative(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
