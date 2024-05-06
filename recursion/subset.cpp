#include<iostream>
#include<string>
using namespace std;

void fun(string sub,string rem)
{
    if(rem==""){
        cout<<sub<<endl;
    }
    else{
    char c=rem[0];
    rem=rem.substr(1);
    fun(sub+c,rem);
    fun(sub+"",rem);
    
    }
}

int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    fun("",s);
}