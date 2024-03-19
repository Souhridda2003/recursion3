#include<iostream>
using namespace std;
// void print(int n){
//     if (n == 0) return ;
//     cout<<n<<" ";
//     print(n-1);
//     cout<<n<<" ";
// }
void print(int x,int n){
    if(x>=n) {
        cout<<n<<" ";
        return;
    }
    cout<<x<<" ";
    print(x+1,n);
    cout<<x<<" ";
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}