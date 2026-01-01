#include <iostream>
using namespace std;

void print(int n, char ch){
    if(n<=0) return;
    cout << ch;
    print(n-1,ch);
}

void diamond(int n, int o){
    if(n==0) return;
    print(n-1,' ');
    cout << '*';
    if(n<o){
        print(2*(o-n)-1,' ');
        cout << "*";
    }
    cout << endl;
    if(n!=1){
        diamond(n-1,o);
        print(n-1,' ');
        cout << '*';
        if(n<o){
            print(2*(o-n)-1,' ');
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    diamond(n,n);
    
    return 0;
}