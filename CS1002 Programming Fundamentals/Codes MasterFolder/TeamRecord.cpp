#include <iostream>
using namespace std;

void InitialiseArrays(int n, int*& TeamID, int*& Wins, int*& Losses, char**& Name){
    TeamID = new int[n];
    Name = new char*[n];
    for(int i=0;i<n;i++) Name[i]=new char[51]; // magic number: 50 is max size givn by q
    Wins = new int[n]; Losses= new int[n];

    for(int i=0;i<n;i++){
        cout << "Team " << i+1 << " ID: "; cin >> TeamID[i];
        cout << "Name " << i+1 << ": "; cin.ignore(); cin.getline(Name[i],50);
        cout << "Wins for Team " << i+1 << ": "; cin >> Wins[i];
        cout << "Losses for Team " << i+1 << ": "; cin >> Losses[i];
    }
}

void Resize(int*& arr, int n){
    int* newarr = new int[n];
    for(int i=0;i<n-1;i++) newarr[i]= arr[i];
    delete[] arr;
    arr = newarr;
}

void ResizeChar(char**& arr, int n){
    char** newarr = new char*[n];
    for(int i=0;i<n-1;i++) newarr[i]= arr[i];
    delete[] arr;
    arr = newarr;
}

void Append(int& n, int* TeamID, int* Wins, int* Losses, char** Name){
    
    n++;
    Resize(TeamID, n); Resize(Wins, n);
    Resize(Losses, n); ResizeChar(Name, n);
    cout << "New Team ID: "; cin >> TeamID[n-1];
    cout << "New Name: "; cin.getline(Name[n-1],50);
    cout << "Wins for New Team: "; cin >> Wins[n-1];
    cout << "Losses for New Team: "; cin >> Losses[n-1];

}

void UpdateRecord(int n, int* TeamID, int* Wins, int* Losses, char** Name){

    /*
    Update a Team's Record:
    Update an existing team's new match played by searching with the team ID
    Update with either another win or loss (increment by 1).
    */
}

void ReadRecord(int n, int* TeamID, int* Wins, int* Losses, char** Name){
    /*
    Read the team's Record:
    Read and print all the team with the highest wins and the team with the highest
    win percentage (wins/total matches) where total matches = wins + losses.
    */
}

void DeleteArrays(int n, int* TeamID, int* Wins, int* Losses, char** Name){
    for(int i=0;i<n;i++) delete[] Name[i];
    delete[] Name;      Name=nullptr;
    delete[] TeamID;    TeamID=nullptr;
    delete[] Wins;      Wins=nullptr;
    delete[] Losses;    Losses=nullptr;
}

int main(){

    int n; cout << "Initial Record Count: "; cin >>n;

    int *TeamID, *Wins, *Losses; char** Name;
    InitialiseArrays(n,TeamID,Wins,Losses,Name);

    char option;
    cout << "Choose an Option:\n\nA: Append New Record\nU: Update Existing Record\n"<<
            "R: Print(Read) Existing Record\n\nChosen Option:";
    cin >> option;

    switch(option){
        default: cout << "Invalid Input"; return 0;

        case 'A':
            Append(n,TeamID,Wins,Losses,Name); break;

        case 'U':
            int pos;
            cout << "Enter Team ID: ";
            cin >> pos;
            UpdateRecord(pos,TeamID,Wins,Losses,Name);
            break;

        case 'R':
            ReadRecord(n,TeamID,Wins,Losses,Name);
        }

    DeleteArrays(n,TeamID,Wins,Losses,Name);
    
}