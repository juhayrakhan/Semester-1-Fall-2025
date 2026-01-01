#include <iostream>
using namespace std;

void SpiralPrint(int r, int c, int arr[10][10], int k) {
    if (r <= 0 || c <= 0) return;

    for (int i = k; i < k + c; i++) cout << arr[k][i] << ' ';
    for (int i = k + 1; i < k + r - 1; i++) cout << arr[i][k + c - 1] << ' ';
    if (r > 1)
        for (int i = k + c - 1; i >= k; i--) cout << arr[k + r - 1][i] << ' ';
    if (c > 1)
        for (int i = k + r - 2; i > k; i--) cout << arr[i][k] << ' ';

    SpiralPrint(r - 2, c - 2, arr, k + 1);
}

int main() {
    int r, c;
    cin >> r >> c;

    int arr[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    SpiralPrint(r, c, arr, 0);
    return 0;
}
