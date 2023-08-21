#include<iostream>
using namespace std;
void SumTriangle(int arr[],int size){
    if(size<1){
        return;
    }
    
        for(int i=0;i<size-1;i++){
            if(i==size-1){
                cout<<arr[i]<<" ";
            }
            else{
                cout<<arr[i]<<",";
            }

        }
        cout<<endl;
        int res[size-1];
        for(int i=0;i<size-1;i++){
            int sum=arr[i]+arr[i+1];
            res[i]=sum;
        }
        

    
    SumTriangle(res,size-1);

}


int main(){
    int arr[]={5,4,3,2,1};
    SumTriangle(arr,5);
    return 0;
}