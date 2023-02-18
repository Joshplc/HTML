#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;
    int A[a];
    for(int i=0;i<a;i++){
        scanf("%d", &A[i]);
    }   
    sort(A,A+a);
    for (int i=0; i<a; i++){
        printf("%d\n", A[i]);
    }
}