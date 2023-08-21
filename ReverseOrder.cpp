#include<iostream>
using namespace std;
void Reverse_Order(int num){
    if(num<10){
        cout<<num;
    }
    else{
        cout<<num%10;
  Reverse_Order(num/10);
    }
   
}


int main(){
    int n;
    cout<<"enter the number to print in reverse order"<<endl;
    cin>>n;
    Reverse_Order(n);
    return 0;
}