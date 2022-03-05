#include<iostream>
#include<algorithm>
using namespace std;

int jos(int n, int k){
    if (n==1)
    {
        return 0;
    }
    return (k+jos(n-1,k))%n;
    
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<jos(n,k);
    
    return 0;
}