#include<iostream>
#include<algorithm>
using namespace std;
bool checkPal(string &s, int start, int end){
if(start>=end){
    return true;
}
else{
if(s[start]==s[end]&&checkPal(s, ++start,--end)){
    return true;
}
else{
    return false;
}
}
}

int main()
{
    string s;
    cin>>s;
    cout<<checkPal(s,0,s.size()-1);
    return 0;
}