#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    
    for(;k>0;k--){
        int temp=arr[n-1];
        for(int i=0;i<n-1;i++){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
    }

    // 1 2 3 4 5
    // 2 3 4 5 1

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}