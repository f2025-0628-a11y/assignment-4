#include <iostream>
using namespace std;

int main(){
    int n,i,j,a[10][10];
    cin>>n;
    for(i=0;i<n;i++) for(j=0;j<n;j++) cin>>a[i][j];
    for(i=0;i<n;i++){
        if(i%2==0) for(j=0;j<n;j++) cout<<a[i][j]<<" ";
        else for(j=n-1;j>=0;j--) cout<<a[i][j]<<" ";
    }
    return 0;
}
