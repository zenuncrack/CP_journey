#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void df(int n, int x[])
{
    for(int i=n; i>=0; i--)
    {
        cout<<x[i]*i<<"x^"<<i-1<<"+ ";
    }

    cout<<endl;

    int p[n-1];
    p[n-1] = x[n] * n;
    cout<<p[n-1]<<endl;

    int s = p[n-1];

    for(int i=n-2; i>=0; i--)
    {
        p[i] = 2 * s + (x[i+1] * (i+1));
        cout<<p[i]<<endl;
        s = p[i];
    }
}

void input()
{
    int n;
    cin>>n;

    int x[n];
    int i;
    for(i=0; i<=n; i++)
    {
        cout<<"x^"<<i<<" : ";
        cin>>x[i];
        cout<<endl;
    }
    i--;

    cout<<"The polynomial function : ";
    for( ; i>=0; i--)
    {
        cout<<x[i]<<"x^"<<i<<" + ";
    }

    cout<<endl;
    df(n, x);

}

int main()
{
    input();

    return 0;
}