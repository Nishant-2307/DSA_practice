#include<iostream>
using namespace std;
void fun(int n){
    if (n==1){
        cout<<1;
    }
    else{
        cout<<n<<endl;
        fun(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    fun(n);
}