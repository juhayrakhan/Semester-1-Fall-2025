#include <iostream>
using namespace std;

int* get_data(int n){
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cout << "Statement " << i+1 <<": ";
        cin >> arr[i];
    }
    return arr;
}

int digits(int n){
    if(n==0) return 0;
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void sort(int*arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(digits(arr[i])>digits(arr[j])){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void display(int* arr, int n){
    for(int i=0;i<n;i++){
        cout <<"STatment " << i+1 << ": " << arr[i]<<endl;
    }
}

int main(){

    int n=4; //cin>>n;
    int* arr =get_data(n);
    sort(arr,n);
    display(arr,n);

    return 0;
}