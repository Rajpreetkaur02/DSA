// also known as sinking sort and exchange sort
// space complexity: O(n) -->inplace sorting algorithm
// time complexity:
// best case: O(n)
// worst case: O(n^2)
// stable: yes

#include<iostream>
using namespace std;
void bubbleSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={4,5,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}