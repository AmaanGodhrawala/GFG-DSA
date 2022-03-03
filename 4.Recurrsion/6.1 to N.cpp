#include<iostream>
#include<algorithm>
using namespace std;
//func for 1 2 3 ..n-1 n
int func(int n){
    if(n==0){
        return 0;
    }
    func(n-1);
    cout<<n<<" ";

}
int main()
{
    int n;
    cin>>n;
    func(n);
    return 0;
}