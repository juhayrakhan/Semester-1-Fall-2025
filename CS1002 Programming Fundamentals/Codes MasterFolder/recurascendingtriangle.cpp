#include <iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout << "*";
    print(n-1);
}

void triangle(int n){
    if(n==0) return;
    triangle(n-1);
    cout << endl;
    print(n);
}

int main() {
    int n;
    cin >> n;
    
    triangle(n);

    return 0;
}