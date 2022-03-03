#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
long long func(long long n){
    if(n==0){
        return 0;
    }
    return n+func(n-1);
}

int main()
{
    long long n;
    cin>>n;
    cout<<func(n)<<endl;
    return 0;
}