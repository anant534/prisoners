#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b , c;
    cin>>a>>b>>c;
    vector<vector<int>>arr(a,vector<int>(b));
    vector<vector<int>>arr1(b,vector<int>(c));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }
    vector<vector<int>>arr2(a,vector<int>(c));
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            arr2[i][j] = fun(arr,arr1,i,j);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            cout<<arr2[i][j];
        }
        cout<<endl;
    }


}