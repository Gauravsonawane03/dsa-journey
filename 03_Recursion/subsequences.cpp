#include<iostream>
#include<string>
using namespace std;
void subsequences(string s, int i, string current){
    if(i==s.length()){
        cout<<current<<endl;
        return;
    }
    subsequences(s,i+1,current+s[i]);
    subsequences(s,i+1,current);

}
int main(){
    string s="abc";
    subsequences(s,0,"");
    return 0;
}
