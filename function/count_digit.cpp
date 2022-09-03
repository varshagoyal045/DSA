#include<bits/stdc++.h>
using namespace std;



int count_digit(int n , int d){
    int ct=0;
    while(n>0){
        int rem = n%10;
        n = n/10;
        if(rem==d) ct++;
    }

    return ct;
}
int main(){
    int n , d;
    cin>> n >> d;

    cout << count_digit(n ,d)<<endl;
}