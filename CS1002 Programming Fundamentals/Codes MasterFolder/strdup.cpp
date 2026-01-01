#include <iostream>
using namespace std;

// Write a function my strdup that duplicates a given string by allocating memory
// and copying the string into the newly allocated memory.
// The function should return the pointer to the duplicated string. 
// The function should handle NULL input by returning NULL.

char* my_strdup(const char* str) {

    int len = 0;
    while (str[len] != '\0')
        len++;

    if (len == 0) return nullptr;

    char* dup = new char[len + 1];
    for (int i = 0; i < len; i++)
        dup[i] = str[i];

    dup[len] = '\0';

    return dup;
}

int main(){
    const int n=12;
    char arr[n];
    cin >> arr;
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    cout << endl;
    char* duplicate = my_strdup(arr);
    int len=0;
    while (duplicate[len] != '\0')
        len++;
    for(int i=0; i<len; i++){
        cout << duplicate[i];
    }
    return 0;
}