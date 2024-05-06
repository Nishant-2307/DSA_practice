// Given a rope of length N meters, and the rope can be cut in only 3 sizes A, B and C. The task is to maximizes the number
// of cuts in rope. If it is impossible to make cut then print the number else print -1. Examples:

// Input: 
// N = 17, A = 10, B = 11, C = 3 
// Output: 3 
// Explanation: The maximum cut can be obtain after making 2 cut of length 3 and one cut of length 11. 

// Input: N = 10, A = 9, B = 7, C = 11 
// Output: -1 
// Explanation: It is impossible to make any cut so output will be -1.

#include<iostream>
using namespace std;

int cut(int l,int a, int b,int c)
{
    int res;
    if (l==0)
        return 0;
    if (l<=-1)
        return -1;
    
    res=max(cut(l-a,a,b,c),max(cut(l-b,a,b,c),cut(l-c,a,b,c)));

    if (res==-1)
        return -1;

    return res+1;
}

int main()
{
    int l,a,b,c,n=0;
    cout<<"Enter the length of the rope and the lengths that are allowed:";
    cin>>l>>a>>b>>c;
    n=cut(l,a,b,c);
    if (n>=0){
        cout<<"The max number of cuts is:"<<n;
    }
    else{
        cout<<"Impossible!";
    }
}