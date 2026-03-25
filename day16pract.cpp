// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void rangeclear(int num ,int i,int j){
//     int a=~0<<(j+1);
//     int b=(1<<i)-1;
//     int mask=a|b;
//     num=num & mask;
//     cout <<num;
// }

// int main (){
//    int num=31;
//    int i=1;
//    int j=3;
//    rangeclear(num,i,j);

//     return 0;
// }


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void array(int arr[],int n){
int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}

int main (){
int arr[]={2,2,3,3,4};
int n=sizeof(arr)/sizeof(int);
array(arr,n);
    return 0;
}


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


int main (){

    return 0;
}