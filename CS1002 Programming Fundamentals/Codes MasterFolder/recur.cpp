#include <iostream>
using namespace std;

int sum( int n){
    if (n==0)
        return 10;
    else
        return n + sum(n-1);
}

int main(){

    int n=4;
    cout << sum(n);

}