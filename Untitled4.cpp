#include <iostream>
#include <string>
using namespace std;

int main() {
    char grid[10][10];
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter puzzle:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> grid[i][j];

    int h=0,v=0;
    string maxw="", temp;

    // horizontal words
    for(int i=0;i<r;i++){
        temp="";
        for(int j=0;j<c;j++){
            if(grid[i][j]!='.') temp+=grid[i][j];
            else { if(temp.length()>=3) h++; if(temp.length()>maxw.length()) maxw=temp; temp=""; }
        }
        if(temp.length()>=3) h++; if(temp.length()>maxw.length()) maxw=temp;
    }

    // vertical words
    for(int j=0;j<c;j++){
        temp="";
        for(int i=0;i<r;i++){
            if(grid[i][j]!='.') temp+=grid[i][j];
            else { if(temp.length()>=3) v++; if(temp.length()>maxw.length()) maxw=temp; temp=""; }
        }
        if(temp.length()>=3) v++; if(temp.length()>maxw.length()) maxw=temp;
    }

    cout << "Horizontal words: " << h << endl;
    cout << "Vertical words: " << v << endl;
    cout << "Longest word: " << maxw << endl;

    return 0;
}
