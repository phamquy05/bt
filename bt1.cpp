#include <iostream>
#include <vector>
using namespace std;
 int main(){
    //nhap so dinh va so canh
    int n,m;
    cout<<"nhap so dinh m va so canh n: m,n= ";
    cin>>n>>m;
    //tao ma tran dua tren so dinh
    vector <vector<int>> matran(n,vector<int>(n,0));
    // nhap dinh va trong so canh u,v dong thoi cap nhap ma tran
    cout<< "bat dau nhap dinh canh";
    for (int i=0; i<m ;i++){
        int u,v;
        cin>>u>>v;
        matran[u-1][v-1]=1;
        matran[v-1][u-1]=1;
    }
    // in ra ma tran 
    for (int i=0;i<n;i++){
        for (int j=0; j<n;j++) {
            cout << matran[i][j]<<" ";
            cout <<"\n";}
        }
    return 0;
 }