#include <iostream>
using namespace std;

int b=10;
int n=5;

int main() {
    int _2dArray[][3] = {{1}, {2, 3, 4}, {2}};
    int x = b;
    int k = n;
    int z = 1;
    while (k != 0) {
        if (k % 2 != 0)
            z = z * x;
        x = x * x;
        k = k / 2;
        }
    cout << b << ' ' << n << endl;
    cout << x << ' ' << k << ' ' << z << endl;

    return 0;
}