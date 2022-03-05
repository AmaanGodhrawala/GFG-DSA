#include<iostream>
#include<algorithm>
using namespace std;

int func( int n, int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<=-1){
        return -1;
    }
    int zerosum = max(func(n-a, a,b,c), max(func(n-b, a,b,c),func(n-c, a,b,c)));
    if(zerosum==-1){
        return -1;

    }

return zerosum+1;

}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<func(n,a,b,c);
    return 0;
}