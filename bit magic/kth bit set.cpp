#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the bit you want to be checked";
    cin>>k;

    if(n%int((pow(2,k)))>=pow(2,k-1)){
        cout<<"kth bit is set";
    }
    else{
        cout<<"kth bit is not set.";
    }
}