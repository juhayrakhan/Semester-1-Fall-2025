#include <iostream>
using namespace std;

int GreatComDiv(int x, int y){
    static int div=(x>y?y+1:x+1);
    if(div==0) return 1;
    div--;
    int check= x%div==0&&y%div==0?div:GreatComDiv(x,y);
    return check;
}

int main() {
    int x,y;
    cin >> x>>y;
    
    cout << GreatComDiv(x,y);

    return 0;
}