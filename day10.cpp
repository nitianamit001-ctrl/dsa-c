#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,9,2};
     int n=sizeof(arr)/sizeof(int);
     int lar=arr[0];
     int min=arr[0];
     for(int i=0;i<n;i++){
      if ( lar<=arr[i]){
        lar=arr[i];
      }
      if(min>arr[i]){
          min=arr[i];
      }
     }
     cout<<"largest no in arr is :"<<lar<<"\n";
     cout<<"minimum no in arr is :"<<min;
    return 0;
}