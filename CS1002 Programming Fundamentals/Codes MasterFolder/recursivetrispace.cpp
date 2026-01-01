#include <iostream>
using namespace std;

void printspaces(int n){
    if(n==0) return;
    cout << ' ';
    printspaces(n-1);
}

void printstars(int n, int o){
    if(n>o) return;
    cout << '*';
    printstars(n+1,o);
}

void tri(int n, int o){
    if(n==0) return;
    printspaces(n-1);
    printstars(n,o);
    cout << endl;
    tri(n-1,o);
}

int main() {
    int n;
    cin >> n;
    
    tri(n,n);
    
    return 0;
}