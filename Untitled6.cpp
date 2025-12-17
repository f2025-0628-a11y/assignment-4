#include <iostream>
using namespace std;

int main(){
    int n,a[10][10],b[100],i,j,k=0,t;
    cin>>n;
    for(i=0;i<n;i++) for(j=0;j<n;j++) cin>>a[i][j];
    for(i=0;i<n;i++) for(j=0;j<n;j++) b[k++]=a[i][j];
    for(i=0;i<k;i++) for(j=0;j<k-1;j++) if(b[j]>b[j+1]){ t=b[j]; b[j]=b[j+1]; b[j+1]=t; }
    k=0;
    for(i=0;i<n;i++) for(j=0;j<n;j++) a[i][j]=b[k++];
    for(i=0;i<n;i++){ for(j=0;j<n;j++) cout<<a[i][j]<<" "; cout<<endl; }
    return 0;
}

