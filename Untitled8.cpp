#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    int i,n,num,cnt;

    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    for(int x:v) cout<<x<<" ";
    cout<<endl;

    cout<<"Enter N: ";
    cin>>n;
    vector<int> u;
    for(i=0;i<n;i++){
        cin>>num;
        u.push_back(num);
    }

    int mx=u[0],mn=u[0];
    for(i=0;i<u.size();i++){
        if(u[i]>mx) mx=u[i];
        if(u[i]<mn) mn=u[i];
    }
    cout<<"Max: "<<mx<<" Min: "<<mn<<endl;

    for(i=0;i<u.size()/2;i++){
        num = u[i];
        u[i] = u[u.size()-1-i];
        u[u.size()-1-i] = num;
    }

    cout<<"Reversed: ";
    for(i=0;i<u.size();i++) cout<<u[i]<<" ";
    cout<<endl;

    cout<<"Enter target: ";
    cin>>num;
    cnt=0;
    for(i=0;i<u.size();i++) if(u[i]==num) cnt++;
    cout<<"Occurrences: "<<cnt<<endl;

    return 0;
}

