#include <iostream>
using namespace std;

int main() {
    
    int n; cout<< "N = "; cin >>n;
    cout << endl; int col=0;
    for (int row=0; row<n;){
        if(col<n){
            if(col==n/2&&row==n/2){
                cout << "0 ";
            }
            else if(row==col||row==n-col-1){
                cout << "* ";
            }
            else if(row==n/2||col==n/2){
                cout << "# ";
            }
            else{
                cout << "  ";
            }
            col++;
        }
        else{
            row++;
            col=0;
            cout << endl;
        }
    }

    return 0;
}