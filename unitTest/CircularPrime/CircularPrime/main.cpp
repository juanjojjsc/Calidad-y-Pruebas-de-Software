#include<iostream>
#include "primos.h"

using namespace std;

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
