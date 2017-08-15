#include<iostream>
#include<cmath>

using namespace std;

int fl;


bool isPrime(int num) {
    if(num < 2) {
        return false;
    } else if(num == 2) {
        return true;
    } else if(num % 2 == 0) {
        return false;
    }
    for(int i = 3, max = sqrt(num); i < max; i += 2) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

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
