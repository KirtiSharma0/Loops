#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=0;
    while(n!=0){
        int z = n%10;
        n = n/10;
        r= r*10;
        r= r+z;
    }
    cout<<r;
    return 0;
}