#include<iostream>
#include<limits>
using namespace std;

int main()
{
    cout<<"Hello World! \n";
    
    int x;
    float y;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"The value that you entered is: "<<x<<"\n";

    //Because if a decimal value entered in x then it goes on to latch itself to y
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // when this used, it clears the buffer

    //Another method maybe to see if int(x)==x and if yes only then input otherwise wrong input

    cout<<"Enter a decimal: ";
    cin>>y;
    cout<<"The value that you entered is: "<<y<<endl;
    cout<<"The integer value of this will be: "<<int(y);


}