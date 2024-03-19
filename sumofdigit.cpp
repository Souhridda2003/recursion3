#include<iostream>
using namespace std;
// void sum(int s,int n){
//     if(n==0){
//         cout<<s;
//         return;
//     }
//     sum(s+(n%10),n/10);
// }
int sum(int n){
    if(n==0) return 0;
    return n%10+sum(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}