// when numbers are given from range 1 to N
// worst case complexity = O(n)

#include<iostream>
using namespace std;
void CyclicSort(int *arr,int n){
    int i=0;
    int correct;
    while(i<n){
        int correct=arr[i]-1;
        if(arr[i]>0 && arr[i]!=arr[correct]){
            swap(arr[i],arr[correct]);
        }
        else{
            i++;
        }
    }
}
int main(){
    int arr[]={2147483647,2147483646,2147483645,3,2,1,-1,0,-2147483648};
    int n=sizeof(arr)/sizeof(int);
    CyclicSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}