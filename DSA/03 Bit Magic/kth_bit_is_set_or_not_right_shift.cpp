#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

void isKthBitSet(int n,int k){
    if (n>>(k-1)&1!=0)
    {
        cout<<"SET";
    }
    else{
        cout<<"NOT SET";
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    isKthBitSet(n,k);
    return 0;
}