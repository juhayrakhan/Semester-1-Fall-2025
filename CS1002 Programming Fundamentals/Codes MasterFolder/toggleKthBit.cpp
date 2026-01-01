#include <iostream>
using namespace std;

void toggleKthBit(int& n, int k){
    int add= 1<<k;
    n += add;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    toggleKthBit(n,k);

    cout << n;
    
    return 0;
}