#include<iostream>
#include<string>
using namespace std;

void fun(string s, int l)
{
    if(l==0 || l==1){
        cout<<"Palindrome";
    }
    else if(s[0]!=s[l-1]){
        cout<<"Not Palindrome";
    }
    else{
        fun(s.substr(1,l-2),l-2);
    }
}


int main()
{
    string s;
    int l;
    cout<<"Enter a word:";
    cin>>s;
    l=s.length();
    fun(s,l);
}