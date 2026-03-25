#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int search(int arr[] ,int st ,int end,int target){
     int mid=st+(end-st)/2;
     if(st>end){
        return -1;
     }
     if (arr[mid]==target){
        return mid;
     }

    //  l1

    if(arr[st]<=arr[mid]){
        if(arr[st]<=target && target<arr[mid]){
            search(arr,st,mid-1,target);
        }else{
            search(arr,mid+1,end,target);
        }
    }

    // l2

    else{
        if(arr[mid]<target && target<=arr[end]){
            search(arr,mid+1,end,target);
        }else{
            search(arr,st,mid-1,target);
        }
    }
}

int main (){
 int arr[]={4,5,6,7,0,1,2};
 int st=0;
 int end=sizeof(arr)/sizeof(int);
 int target=0;
 cout<<search(arr,st,end,target);
    return 0;
}