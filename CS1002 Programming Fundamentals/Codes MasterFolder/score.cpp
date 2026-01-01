#include <iostream>
using namespace std;

int len(char arr[100]){
    int l = 0;
    while (arr[l] != '\0'&&(l!=99||arr[l+1]!='\0')){
        l++;
    }
    return l;
}

void toLower(char arr[100]){
    for(int i=0;i<len(arr);i++){
        if(arr[i]>96 && arr[i]<123) arr[i] -=32;
    }
}

int score(char arr[100]){
    int score=0;
    for(int i=0;i<99&&arr[i+1]!='\0';i++){
        int val= arr[i]-arr[i+1];
        if(val<0) val*=-1;
        score+=val;
    }
    return score;
}

int main() {
    
    char arr[100]={'\0'};

    cin.getline(arr,100);

    toLower(arr);

    cout << score(arr);

    return 0;
}