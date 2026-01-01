#include <iostream>
using namespace std;

int Fibonacci(int count, int n1=1, int n2=1){
    if(count==0) return 0;
    if(count==1) return n1;
    if(count==2) return n1;
    int x= n1 + n2;
    n2=n1;
    n1=x;
    return Fibonacci(count-1, n1, n2);
}

int main() {
    
    int n; cin>>n;
    cout <<Fibonacci(n);

    return 0;
}