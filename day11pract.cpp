// #include<iostream>
// #include<climits>
// #include<vector>
// #include <algorithm>
// using namespace std;
// bool countarray(int arr[],int n){
//     int count=0;
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//        if(arr[i]==arr[i+1]){
//         return true;
//        }
       
//     }
//     return false;
// }

// int main (){
//   int arr[]={1,3,4,5,6,7,2,1};
//  int n=sizeof(arr)/sizeof(int);
//  cout<<countarray(arr,n);
//     return 0;
// }







// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int reidx(int arr[],int n,int target){
//     sort(arr,arr+n);
//     int srt=0,end=n-1;
//     while(srt<=end){
//         int mid=(srt+end)/2;
//         if(arr[mid]==target){
//             return mid;

//         }else if(arr[mid]>target){
//             end=mid-1;
//         }else{
//             srt=mid+1;
//         }
//     }
//     return -1;
// }

// int main (){
//   int arr[]={4,5,6,7,0,1,2};
//   int target=4;
//  cout<< reidx(arr,sizeof(arr)/sizeof(int),target);
//     return 0;
// }










#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxproduct(int arr[],int n){
    int maxproduct=INT_MIN;
        for(int i=0;i<n-1;i++){
            int currproduct=1;
            for(int j=i;j<n;j++){
                currproduct*=arr[j];
                maxproduct=max(maxproduct,currproduct);
            }
       
    }
    return maxproduct;
}

int main (){
int arr[]={2,-1,4};
int n=sizeof(arr)/sizeof(int);
cout<<maxproduct(arr,n);
    return 0;
}