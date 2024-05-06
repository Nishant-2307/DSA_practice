#include<iostream>
using namespace std;

void sieve(int n){
    bool isPrime[n+1];
    for(int i=0;i<=n;i++){
        isPrime[i]=true;
    }
    for(int i=2;i*i<=n;i++){
        if (isPrime[i]==true){
            for(int j=i*i;j<=n;j+=i)
                isPrime[j]=false;
        }
    }
    for (int i=2;i<n+1;i++){
        if (isPrime[i]==true)
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Print prime numbers in between 1 and? ";
    cin>>n;
    sieve(n);
}