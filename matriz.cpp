#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,count=0; cin>>a;
    char B[a][a];
    for (int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>B[i][j];
            if(B[i][j]==1) count++;
        }
    }
    for (int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(count<a*a/2) printf(B[i][j]=='1'?"*":"o");
            else printf(B[i][j]=='1'?"o":"*");
        }
        cout<<"\n";
    }
}