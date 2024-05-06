#include<iostream>
using namespace std;
void fun(int n,int a)
{
    if (n!=0){
        n=n/10;
        a+=1;
        fun(n,a);
    }
    else{
        cout<<"No. of digits:"<<a;
    }
}

int main()
{
    int n,c=0;
    cout<<"Enter a number:";
    cin>>n;
    fun(n,c);
}