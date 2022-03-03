#include<iostream>
#include<algorithm>
using namespace std;
//func for n n-1 n-2...3 2 1
int func(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    func(n-1);

}

int main()
{
    int n;
    cin>>n;
    func(n);
    return 0;
}