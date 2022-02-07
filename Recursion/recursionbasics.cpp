//print numbers from n to 1
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1);
// }
// int main(){
//     int n=5;
//     print(5);
//     return 0;
// }

//print numbers from 1 to n
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n=5;
//     print(5);
//     return 0;
// }

//find factorial
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<fact(6);
//     return 0;
// }

//sum of N numbers
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cout<<sum(5);
// }

//sum of N digits
// #include<iostream>
// using namespace std;
// int digitsum(int n){
//     if(n==0){
//         return 0;
//     }
//     return (n%10)+digitsum(n/10);
// }
// int main(){
//     int n;
//     cout<<digitsum(6452);
// }

//product of N digits
// #include<iostream>
// using namespace std;
// int digitprod(int n){
//     if(n%10==n){
//         return n;
//     }
//     return (n%10)*digitprod(n/10);
// }
// int main(){
//     int n;
//     cout<<digitprod(6452);
// }

//reverse a number
//method 1
// #include<iostream>
// using namespace std;
// int sum=0;
// void reverseN(int n){
//     if(n==0){
//         return;
//     }
//     int rem=n%10;
//     sum=sum*10+rem; 
//     reverseN(n/10);
// }
// int main(){
//     int n;
//     reverseN(6452);
//     cout<<sum;
// }

//method 2
// #include<iostream>
// #include<cmath>
// using namespace std;
// int helper(int n,int digits){
//     if(n%10==n){
//         return n;
//     }
//     int rem=n%10;
//     return rem*pow(10,digits-1)+helper(n/10,digits-1);
// }
// int reverseN(int n){
//     int digits=0;
//     int num=n;
//     while(num!=0){
//         digits++;
//         num=num/10;
//     }
//     return helper(n,digits);
// }
// int main(){
//     int n=1221;
//     int rev=reverseN(1221);
//     if(rev==n){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }
// }

//calculate the number of zeroes in a given number
#include<iostream>
using namespace std;
int count,rem;
int zeroes(int n){
    if(n==0){
        return 0;
    }
    rem=n%10;
    if(rem==0){
        count++;
    }
    zeroes(n/10);
    return count;
}
int main(){
    int n;
    cout<<zeroes(30200040);
    return 0;
}