#include<iostream>
using namespace std;

int main(){
    int c=0,temp=0;
    double x;
    while(1){
        cout<<"Enter a integer: ";
        cin>>x;
        if (int(x)!=x){
            cout<<"Not a valid integer \n";
        }
        else{
            break;
        }
    }
    temp=x;
    while (x>0){
        x=int(x/10);
        c++;
    }
    cout<<"The no. of digits in "<<temp<<": "<<c;
}
