#include <iostream>
using namespace std;

int CountDigits(int n, int o){
    if(o==0) return 1;
    if(n==0) return 0;
    n/=10;
    return 1+CountDigits(n,o);
}

int main() {
    int n;
    cin >> n;
    
    cout << CountDigits(n,n);

    return 0;
}