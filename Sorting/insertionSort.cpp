// time complexity:
// best case: O(n)
// worst case: O(n^2)
// stable: yes
// inplace sorting algorithm

#include<iostream>
using namespace std;
void insertionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}
int main(){
    int arr[]={4,5,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}