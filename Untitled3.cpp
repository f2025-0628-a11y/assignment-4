#include <iostream>
using namespace std;

int seats[10][10];

void show() {
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) cout<<seats[i][j]<<" ";
        cout<<endl;
    }
}

int main() {
    int choice,r,c,i,j;
    // init
    for(i=0;i<10;i++) for(j=0;j<10;j++) seats[i][j]=0;

    do{
        cout<<"\n1.Show 2.Reserve 3.Cancel 4.Count 5.Exit: ";
        cin>>choice;

        if(choice==1) show();
        else if(choice==2){
            cout<<"Row Col: "; cin>>r>>c; r--; c--;
            if(seats[r][c]==0){ seats[r][c]=1; cout<<"Reserved\n"; }
            else cout<<"Already reserved\n";
        }
        else if(choice==3){
            cout<<"Row Col: "; cin>>r>>c; r--; c--;
            if(seats[r][c]==1){ seats[r][c]=0; cout<<"Cancelled\n"; }
            else cout<<"Already empty\n";
        }
        else if(choice==4){
            int full=0,part=0,empty=0,sum;
            for(i=0;i<10;i++){
                sum=0;
                for(j=0;j<10;j++) sum+=seats[i][j];
                if(sum==10) full++;
                else if(sum==0) empty++;
                else part++;
            }
            cout<<"Full: "<<full<<" Partial: "<<part<<" Empty: "<<empty<<endl;
        }
    }while(choice!=5);

    return 0;
}
