#include <iostream>
using namespace std;

void generateSubsets(int* arr, int n, int size, int start, int* subset, int index) {
    if (index == size) {
        for (int i = 0; i < size; i++)
            cout << subset[i] << ' ';
        cout << endl;
        return;
    }

    for (int i = start; i < n; i++) {
        subset[index] = arr[i];
        generateSubsets(arr, n, size, i + 1, subset, index + 1);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[10];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int subset[10];

    for (int size = 1; size <= n; size++)
        generateSubsets(arr, n, size, 0, subset, 0);

    return 0;
}
