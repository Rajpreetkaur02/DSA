//check whether array is sorted or not
// #include<iostream>
// using namespace std;
// bool sortedOrNot(int arr[],int i,int n){
//     if(i==n-1){
//         return true;
//     }
//     return arr[i]<arr[i+1] && sortedOrNot(arr,i+1,n); 
// }
// int main(){
//     int arr[]={1,2,3,4,51,6,7};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<sortedOrNot(arr,0,n);
// }

//linear search
// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int n,int index,int target){
//     if(arr[index]==n){
//         return false;
//     }
//     if(arr[index]==target){
//         return index;
//     }
//     else{
//     return linearSearch(arr,n,index+1,target);
//     }
// }
// int main(){
//     int arr[]={23,45,67,23,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     int target;
//     cout<<linearSearch(arr,n,0,10);
// }

//linear search (multiple occurances)
#include<iostream>
#include<vector>
using namespace std;

vector<int> linearSearch(int arr[],int n,int index,int target,vector<int> A){
    if(index==n-1){
        return A;
    }
    if(arr[index]==target){
        return A.push_back(index);
    }
    return linearSearch(arr,n,index+1,target,A);

}
int main(){
    int arr[]={23,45,67,23,3,2};
    int n=sizeof(arr)/sizeof(int);
    vector<int> Ans;
    Ans=linearSearch(arr,n,0,23,A);
    for(int i=0;i<A.size();i++){
        cout<<A[i];
    }
}