#include "bub.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    double p[50],r=1.0;
    for(i=0;i<50;i++){
        r=2053.0*r+13849.0;
        j=r/65536.0;
        r=r-j*65536.0;
        p[i]=r/65536.0;
    }
    for(i=0;i<50;i++)
        p[i]=100.0+200.0*p[i];
    cout<<"排序前的序列："<<endl;
    for(i=0;i<10;i++){
        for(j=0;j<5;j++)cout<<setw(10)<<p[5*i+j];
        cout<<endl;
    }
    bub(p+10, 30);
    cout<<"排序后的序列："<<endl;
    for(i=0;i<10;i++){
        for(j=0;j<5;j++)cout<<setw(10)<<p[5*i+j];
        cout<<endl;
    }
    return 0;
}
