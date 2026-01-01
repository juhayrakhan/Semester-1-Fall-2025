#include <iostream>
using namespace std;

void printstars(int n){
    if(n==0) return;
    cout << '*';
    printstars(n-1);
}

void printspace(int n, int o){
    if(n==o) return;
    cout << ' ';
    printspace(n+1,o);
}

void tri(int n, int o){
    if(n==0) return;
    printspace(n,o);
    printstars(n);
    cout << endl;
    tri(n-1,o);
}

int main() {
    int n;
    cin >> n;
    
    tri(n,n);
    
    return 0;
}