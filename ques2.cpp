#include<iostream>
using namespace std;
void printodd(int x,int y){
    if(x>y) return;
    cout<<x<<" ";
    printodd(x+2,y);
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a%2==0) a++;
    printodd(a,b);
}