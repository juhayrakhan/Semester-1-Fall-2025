#include <iostream>
using namespace std;

// Write a program to calculate the sum and average of n integer numbers (input from user).
// Input 0 to finish.

int main(){

    int sum=0, count=0, av=0;
    int n; cout << "Num: "; cin >> n;
    while(n!=0){
        sum+=n; count++;
        cout << "Num: "; cin >> n;
    }
    av=sum/count;
    cout << "Sum: " << sum << "\nAverage: "<< av << endl;
    return 0;
}