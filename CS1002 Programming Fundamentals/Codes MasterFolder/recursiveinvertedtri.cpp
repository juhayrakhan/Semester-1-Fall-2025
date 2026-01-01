#include <iostream>
using namespace std;

void printline(int n){
    if(n==0) return;
    cout << "*";
    printline(n-1);
}

void tri(int n){
    if(n==0) return;
    printline(n);
    cout << endl;
    tri(n-1);
}

int main() {
    int n;
    cin >> n;
    
    tri(n);
    
    return 0;
}