#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    cout<<"number of set bits are "<<count<<endl;
}