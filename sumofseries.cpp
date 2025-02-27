//sum of series 1-2+3-4+5-6......upto n
//odd add and even minus

#include<iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int sum=0;
     if(n%2==0){
        sum = -1*n/2;
     }
     else{
        sum = (-1*n/2)+7;
     }
     cout<<sum;
    return 0;
}