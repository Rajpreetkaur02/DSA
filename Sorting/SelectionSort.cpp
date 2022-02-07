// complexity: 
// best case = O(n^2)
// worst case = O(n^2)
// stable = no
// perfeorms well on small lists

#include<iostream>
using namespace std;
void selectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
         swap(arr[i],arr[minindex]);
    }
}
int main(){
    int arr[]={4,5,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}