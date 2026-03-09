#include<iostream>
using namespace std;
// int search(int num[],int n,int key){                                 2
//         for(int i=0;i<n;i++){
//             if(num[i]==key){
//                 cout<<"position" <<i<< "is found"<< key;
//                 return i;
//             }
//         }
//         return -1;
//     }


int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
while(start<=end){
   int mid=(start+end)/2;
   if(arr[mid]==key){
    return mid;
   } else if(arr[mid]<key){
    start=mid +1;
   }else{
    end=mid-1;
   }
}
return -1;
}

int main(){
    // int arr[]={5,4,3,9,2};                                          1
    //  int n=sizeof(arr)/sizeof(int);
    //  int lar=arr[0];
    //  int min=arr[0];
    //  for(int i=0;i<n;i++){
    //   if ( lar<=arr[i]){
    //     lar=arr[i];
    //   }
    //   if(min>arr[i]){
    //       min=arr[i];
    //   }
    //  }
    //  cout<<"largest no in arr is :"<<lar<<"\n";
    //  cout<<"minimum no in arr is :"<<min;

    
    // int arr[]={2,4,6,8,10,12,20};                                       2part
    // int n=sizeof(arr)/sizeof(int);
    // int key=30;
    // cout<<search(arr,n,key);


    int arr[]={2,4,6,8,10,12,14,16};
    int key=20;
    int n=sizeof(arr)/sizeof(int);
   cout<< binarysearch(arr,n,key);
    
    return 0;
}