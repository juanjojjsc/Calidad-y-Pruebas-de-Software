#include<iostream>
#include<cmath>

using namespace std;

int fl;

void prime(long int n)
{
    long int i;
    i=n-1;
    while(i>=2)
    {
        if(n%i==0)
        {
            fl=1;
        }
        i--;
    }
}

void rotate(long int a)
{
    long int b,c,d,e,i,j,k,s,z,v,x[8],y[8],m;
    b=a;
    i=0;
    while(b>0)
    {
        y[i]=b%10;
        b=b/10;
        i++;
    }
    c=0;
    for(j=i-1;j>=0;j--)
    {
        x[c]=y[j];
        c++;
    }
    m=i;
    while(m>0)
    {
        c=m-1;
        d=i-1;
        e=0;
        s=0;
        while(e<i)
        {
            z=pow(10,d);
            v=z*x[c%i];
            c++;
            d--;
            e++;
            s=s+v;
        }
        m--;
        prime(s);
    }
}

int main()
{
    long int i=2,ct;
    cout<<"\nEnter the Limit: ";
    cin>>ct;
    cout<<"\nCircular Prime Numbers less than "<<ct<<" : ";
    while(i<=ct)
    {
        fl=0;
        rotate(i);
        if(fl==0)
        {
            cout<<"\n"<<i;
        }
        i++;
    }
    return 0;
}
