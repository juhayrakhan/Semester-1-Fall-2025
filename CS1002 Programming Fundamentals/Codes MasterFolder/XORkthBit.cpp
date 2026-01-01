#include <iostream>
using namespace std;

void toggleKthBit(int& n, int k){
    int bit= 1<<k;
    n ^= bit;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    toggleKthBit(n,k);

    cout << n;

    return 0;
}