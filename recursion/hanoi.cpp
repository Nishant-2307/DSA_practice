#include<iostream>
using namespace std;

void fun(int n,int s, int e,int a)
{
    if(n==0){
        return;
    }
    fun(n-1,s,a,e);
    cout<<"move disk "<<n<<" from tower "<<s<<" to tower "<<e<<endl;
    fun(n-1,a,e,s);
}

int main()
{
    int n;
    cout<<"Enter the no. of disks:";
    cin>>n;
    fun(n,0,2,1);
}