

#include<bits/stdc++.h>
using namespace std;

void getsub(int i,int arr[] ,int n, vector<vector<int>> &v , vector<int> &ds){
    
    if(i==n){
        v.push_back(ds);
        return;
    }
    
     getsub(i+1 , arr , n, v ,ds);
    ds.push_back(arr[i]);
    getsub(i+1 , arr , n , v , ds);
    ds.pop_back();
}

int main() {
    // Write C++ code here

vector<vector<int>> v;
vector<int> ds;
int n ;
cout<<" enter the size of array";
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i];
}
getsub(0 , arr , n , v , ds);

for(auto it : v){
    
    for(int x : it){
        cout<<x <<" ";
    }
    cout<<endl;
}

    return 0;
}