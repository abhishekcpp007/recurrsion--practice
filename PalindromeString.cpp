#include<iostream>
using namespace std;


bool isPalindromeString(string str,int si,int ei){
    if(si>=ei){
        return true;
    }
    if(str[si]!=str[ei]){
        return false;
    }
    return isPalindromeString(str,si+1,ei-1);

}

int main(){
    string str="abcdcba";
    int ei=str.size()-1;
    if(isPalindromeString(str,0,ei)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}