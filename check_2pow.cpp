#include<iostream>
using namespace std;
bool check_2pow(int num){
if(num==1){
    return true;
}
if(num%2 !=0 || num==0){
    return false;
}
return check_2pow(num/2);




}




int main(){

    int n;
    cout<<"enter the number to check"<<endl;
    cin>>n;
    cout<<"the result is ->"<<check_2pow(n);
        return 0;
}