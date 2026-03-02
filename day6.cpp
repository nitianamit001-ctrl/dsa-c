// #include<iostream>
// using namespace std;
// int product(int a,int b){                                   1
//     return a*b;
// }


// int cheack (int n){                                         2
//     if(n%2==0){
//         cout<<"even";
//     }else{
//         cout<<"odd";
//     }
// }


// int fact(int n){                                               3
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//         return fact;

// }


// #include<cmath>                                                       4
// bool prime (int n){
//     if(n==1){
//         return false;
//     }
//     for(int i=2;i<=sqrt(n);i++){
//     if(n%i==0){
//         return false;
//     }
// }
//     return true;
// }


// int fact(int n){                                                       5
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//         return fact;
// }
// int bionomial(int n, int r){
//     int val1=fact(n);
//     int val2=fact(r);
//     int val3=fact(n-r);
//     return val1/(val2*val3);
// }



// #include<cmath>                                                    6
// int allprime(int n){
//       bool isprime;
//       if(n==1){
//         return false;
//       }
//     for(int j=2;j<=sqrt(n);j++){
//           if(n%j==0){
//             return false;
//           }
//     }
//     return true ;
// }

// void prime(int n){
//     for(int i=2;i<=n;i++){
//     if(allprime(i)){
//         cout<<i<<" ";
//     }
//     }
// }


// int main(){
//    int result1=product(5,4);                                                       1

// int n;
// cin>>n;

//    cheack(n);                                                                     2
//    cout<<"result is ="<<result1<<endl;


// int result3=fact(n);                                                               3
//    cout<<"result is ="<<result3<<endl;

// bool isprime=prime(n);                                                             4
// if(isprime){
//     cout<<n <<": is a prime no";
// }else{
//     cout<<n <<": is a  not prime no";

// }


// cout<<bionomial(4,2)<<endl;                                                        5


// prime(20);                                                                           6 


//     return 0;
// }


// prctise question