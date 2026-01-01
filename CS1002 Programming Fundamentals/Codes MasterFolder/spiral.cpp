#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r>>c;
    int arr[10][10];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
        cin >> arr[i][j];
    }
    
    cout << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++) {
            cout << arr[i][j]<<' ';
        }
        cout << endl;
    }
    cout << endl;
    
    for(int k=0;k<(r/2)+r%2;k++){
        if(k==r/2&&r%2){
            cout << arr[k][k];
            continue;
        }
        for(int i = k; i < c-k; i++) cout << arr[k][i] <<' ';
        for(int j=1+k;j<r-1-k;j++) cout << arr[j][c-1-k] << ' ';
        for(int i = k; i < c-k; i++) cout << arr[r-1-k][c-i-1] <<' ';
        for(int j=1+k;j<r-k-1;j++) cout << arr[r-j-1][k] << ' ';
    }

    return 0;
}