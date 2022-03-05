#include<iostream>
#include<algorithm>
using namespace std;

int func(int n){
    // int sum=0;
    if(n==0){
        return 0;
    }
    
    return (n%10)+func(n/10);
}

int main()
{
    int n;
    cin>>n;

    int m=func(n);
    cout<<m;
    return 0;
}