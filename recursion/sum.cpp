#include<iostream>
using namespace std;
void fun(int n,int sum){
    if (n==1){
        cout<<"Sum:"<<sum+1;
    }
    else{
        fun(n-1,sum+n);
    }
}

int main(){
    int n,sum=0;
    cout<<"Enter your number:";
    cin>>n;
    fun(n,sum);
}