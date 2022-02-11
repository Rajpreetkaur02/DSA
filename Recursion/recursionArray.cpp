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
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> linearSearch(int arr[],int n,int index,int target,vector<int> ans){
//     if(index==n){
//         return ans;
//     }
//     if(arr[index]==target){
//         ans.push_back(index);
//     }
//     return linearSearch(arr,n,index+1,target,ans);

// }
// int main(){
//     int arr[]={23,45,67,23,23,2,23,23,23};
//     int n=sizeof(arr)/sizeof(int);
//     vector<int> ans;
//     vector<int> list =linearSearch(arr,n,0,23,ans);;
//     for(int i=0;i<list.size();i++){
//         cout<<list[i]<<" ";
//     }
// }

//linear search(without passing the vector in arguments)
#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;

vector<int> linearSearch(int arr[],int n,int index,int target){
    if(index==n){
        return ans;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    return linearSearch(arr,n,index+1,target);

}
int main(){
    int arr[]={23,45,67,23,23,2,23,23,23};
    int n=sizeof(arr)/sizeof(int);
    ans = linearSearch(arr,n,0,23);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}