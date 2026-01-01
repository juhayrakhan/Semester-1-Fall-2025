#include <iostream>
using namespace std;

// Write a program to calculate the sum and average of n integer numbers (input from user).
// Input 0 to finish.

void sum_av(int& sum, int& av){
    int n; cout << "Num: "; cin >> n;
    if(n==0){
        av=sum/av;
        return;
    }
    sum+=n; av++;
    sum_av(sum,av);
}

int main(){

    int sum=0; int av=0;
    sum_av(sum,av);
    cout << "Sum: " << sum << "\nAverage: "<< av << endl;
    return 0;
}