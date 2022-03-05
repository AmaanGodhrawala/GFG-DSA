#include<iostream>
#include<algorithm>
#include <string>
using namespace std;

void fun(string s, int index, string curr){
    if(index==s.size()){
        cout<<curr<<endl;
        return ;
    }
    fun(s,index+1,curr);
    fun(s, index+1, curr+s[index]);

    
}

int main()
{
    string s;
    cin>>s;
    fun(s,0,"");
    return 0;
}