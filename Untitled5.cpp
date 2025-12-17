#include <iostream>
using namespace std;

int main() {
    int m,n,i,j,a[10][10],b[10][10];
    cin >> m >> n;
    for(i=0;i<m;i++) for(j=0;j<n;j++) cin >> a[i][j];

    for(i=0;i<m;i++) for(j=0;j<n;j++) b[n-j-1][i]=a[i][j];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++) cout << b[i][j] << " ";
        cout << endl;
    }

    return 0;
}
