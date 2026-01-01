#include <iostream>
using namespace std;

void print(int n, char ch){
    if(n==0) return;
    cout << ch;
    print(n-1,ch);
}

void square(int n, int o){
    if(n==1){
        print(o,'*');
        return;
    }
    if(n==o){
        print(n,'*');
    }
    else{
        cout << "*";
        print(o-2,' ');
        cout << "*";
    }
    cout << endl;
    square(n-1,o);
}

int main() {
    int n;
    cin >> n;
    
    square(n,n);
    
    return 0;
}