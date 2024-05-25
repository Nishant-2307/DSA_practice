#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k;
    char c;
    
    cout<<"pattern 1"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"pattern 2"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"pattern 3"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"pattern 4"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"pattern 5"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"pattern 6"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<6-j;
        }
        cout<<endl;
    }

    cout<<"pattern 7"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<"pattern 8"<<endl;
    for(i=5;i>=1;i--)
    {
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<"pattern 9"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<"pattern 10"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"pattern 11"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<(1+i+j)%2;
        }
        cout<<endl;
    }

    cout<<"pattern 12"<<endl;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(j=1;j<=2*(4-i);j++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"pattern 13"<<endl;
    k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }

    cout<<"pattern 14"<<endl;
    c='A';
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<char(c+j);
        }
        cout<<endl;
    }
    
    cout<<"pattern 15"<<endl;
    c='A';
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<char(c+j);
        }
        cout<<endl;
    }

    cout<<"pattern 16"<<endl;
    c='A';
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<char(c+i);
        }
        cout<<endl;
    }

    cout<<"pattern 17"<<endl;
    c='A';
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4-i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<char(c+j);
        }
        j-=2;
        while(j>=0)
        {
            cout<<char(c+j);
            j-=1;
        } 
        cout<<endl;
    }

    cout<<"pattern 18"<<endl;
    for(i=1;i<=5;i++)
    {
        c='E';
        c=c-i+1;
        for(j=1;j<=i;j++)
        {
            cout<<char(c+j-1);
        }
        cout<<endl;
    }

    cout<<"pattern 19"<<endl;
    for(i=0;i<=4;i++)
    {
        for(j=4;j>=i;j--)
        {
            cout<<"*";
        }
        for(j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        for(j=4;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=4;i>=0;i--)
    {
        for(j=4;j>=i;j--)
        {
            cout<<"*";
        }
        for(j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        for(j=4;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"pattern 20"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*(5-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*(5-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"pattern 21"<<endl;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || j==0 || i==4|| j==4)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"pattern 22"<<endl;
    k=4;
    for(i=1;i<=2*k-1;i++)
    {
        for(j=1;j<=2*k-1;j++)
        {
            if(i==1 || j==1 || i==2*k-1|| j==2*k-1)
            {
                cout<<k;
            }
            else if(i==2 || j==2 || i==2*k-2|| j==2*k-2)
            {
                cout<<k-1;
            }
            else if(i==3 || j==3 || i==2*k-3|| j==2*k-3)
            {
                cout<<k-2;
            }
            else if(i==4 || j==4 || i==2*k-4|| j==2*k-4)
            {
                cout<<k-3;
            }
        }
        cout<<endl;
    }
}