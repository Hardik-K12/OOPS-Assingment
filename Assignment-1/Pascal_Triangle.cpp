#include<iostream>
using namespace std;

int fact(int p)
{
    int res=1;

    // Find factorial
    for(int i=p;i>1;i--)
    {
        res*=i;
    }

    return res;
}

int BinoCoef(int n,int r)
{
    int res;

    // Calculate binomial coefficient
    res=fact(n)/(fact(r)*fact(n-r));

    return res;
}

void printTriangle(int n)
{
    for(int l=0;l<n;l++)
    {
        // Print each row
        for(int m=0;m<=l;m++)
        {
            cout<<"\t"<<BinoCoef(l,m);
        }

        cout<<endl;
    }
}

int main()
{
    int row;

    cout<<"\nEnter number of rows for pascal triangle: ";
    cin>>row;

    printTriangle(row);

    return 0;
}
