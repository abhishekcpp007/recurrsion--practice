#include<iostream>
using namespace std;


bool  isupperCheck(string str, int i){
    if(str[i]=='\0'){
        return -1;
    }
    if(isupper(str[i])){
        return i;
    }
    isupperCheck(str,i+1);
}



int main(){

string str="pWskiLL";
//cout<<"enter the string for check is upper"<<endl;
//cin>>str;
cout<<"character is at the index ->"<<isupperCheck(str,0)<<endl;
    return 0;
}