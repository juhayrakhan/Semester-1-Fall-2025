# include <iostream>
using namespace std;
int main(){
    
    int n; cout << "N = "; cin >>n;
    for(int row = 0; row<n; row++){
        for (int col = 0; col<n; col++){
            if(col==0||row==0||col==n-1||row==n-1) cout << "1 ";
            else if(col%2==0)
                if((row>=col&&row<=n-col-n%2)||(row<=col&&row>n-col-n%2))
                cout << col<< " ";
            else if (row%2==0)
                if((col>=row&&col<=n-row-n%2)||(col<=row&&col>n-row-n%2))
                cout << row<< " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}