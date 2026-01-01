#include <iostream>
using namespace std;

void print(int n){
    if(n==0)return;
    cout << "*";
    print(n-1);
}

void space(int n,int o){
    if(o==n) return;
    space(n,o-1);
    cout << " ";
}

void tri(int n, int o){    
    if(n==0) return;
    tri(n-1,o);
    space(n,o);
    print(2*n-1);
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    tri(n,n);
    
    return 0;
}