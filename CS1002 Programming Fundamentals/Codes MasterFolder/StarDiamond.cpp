#include <iostream>
using namespace std;
int main()
{
    int rows; cout << "N = "; cin >> rows;
    int i, j, space;
    for (i = 1; i <= rows; i++)
    {
        for (space = i; space < rows; space++)  cout << " ";
        for (j = 1; j <= i; j++)    cout << "* ";
        cout << endl;
    }    
    for (i = rows - 1; i >= 1; i--)
    {
        for (space = rows; space > i; space--)  cout << " ";
        for (j = 1; j <= i; j++)    cout << "* ";
        cout << endl;
    }
    return 0;
}