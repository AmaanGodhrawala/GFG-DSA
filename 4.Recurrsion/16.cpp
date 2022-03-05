#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int subsum(vector<int> v,int n, int sum){
    if(n==0){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    return subsum(v,n-1,sum)+subsum(v,n-1,sum-v[n-1]);
}


int main()
{
    int n;
    cin>>n;
    vector<int > v;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    int sum;
    cin>>sum;
    cout<<subsum(v,n,sum)<<endl;
    return 0;
}