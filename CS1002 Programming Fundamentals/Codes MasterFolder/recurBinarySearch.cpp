#include <iostream>
using namespace std;

void find(int f, int start, int end, int arr[100]){
    int mid=(start+end)/2;
    if(arr[mid]==f){
        cout << mid; return;
    }
    if(start>=end){
        cout << -1; return;
    }
    else if(arr[mid]>f) end=mid-1;
    else if(arr[mid]<f) start=mid+1;
    find(f,start,end,arr);
}

int main() {
    int n; cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;

    find(target,0,n,arr);

    return 0;
}