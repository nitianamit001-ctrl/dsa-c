// #include<iostream>
// using namespace std;                                                                             1
// int main(){
//    int arr[]={5,4,1,3,2};
//    int n=sizeof(arr)/sizeof(int);

//    for(int i=0 ;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
//    }
//    cout<<"it is in accending order"<<endl;
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<",";
//    }
//    cout<<endl;
//    cout<<"it is in decending order"<<endl;
//    for(int i=n-1;i>=0;i--){
//     cout<<arr[i]<<",";
//    }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void selection(int arr[],int n){
//     int max=0;
// for(int j=0;j<n;j++){
//     for(int i=0;i<n-1;i++){
//      max=min(arr[i],arr[i+1]);
//     }
//     cout<<max<<",";
// }
    
// }
// int main(){
// int arr[]={5,4,1,3,2};
// int n=sizeof(arr)/sizeof(int);
// selection(arr,n);
//     return 0;
// }

//  #include<iostream>                                                 2
//  using namespace std;
//  void selection(int arr[],int n){
//    for(int i=0;i<n;i++){
//   int  minidx=i;
// for(int j=i+1;j<n;j++){
//     if(arr[j]<arr[minidx]){
//         minidx=j;
//     }
// }
// swap(arr[i],arr[minidx]);
// cout<<arr[i]<<",";
//    }

//  }
//  int main(){
//  int arr[]={5,4,1,3,2};
//  int n=sizeof(arr)/sizeof(int);
//  selection(arr,n);

//     return 0;
//  }


//   #include<iostream>                                                          3      
//   using namespace std;
//   void insertion(int arr[],int n){
//  for (int i=1;i<n;i++){
//     int curr=arr[i];
//     int prev=i-1;
//     while(prev>=0 && arr[prev]>curr){
//         swap(arr[prev],arr[prev+1]);

//         prev--;
//     }
//     arr[prev+1]=curr;
//  }
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<",";
//  }
//   }
//   #include<iostream>                                                 
//   using namespace std;
//   int main(){
//     int arr[]={5,4,1,3,2};
//   int n=sizeof(arr)/sizeof(int);
// insertion(arr,n);
//     return 0;
//   }



//    #include<iostream>  
//    #include<climits>                                               4
//   using namespace std;
//   void counting(int arr[],int n){
// int freq[100000];
// int minval=INT_MAX;
// int maxval=INT_MIN;
// for(int i=0;i<n ;i++){
//     minval=min(minval,arr[i]);
//     maxval=max(maxval,arr[i]);
// }
// for(int i=0; i<n;i++){
//     freq[arr[i]]++;
// }
// for(int i=minval,j=0;i<=maxval;i++){
//        while(freq[i]>0){
//         arr[j++]=i;
//         freq[i]--;
//        }
// }
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<",";
//  }
//   }
//     #include<iostream>                                                 
//   using namespace std;
//   int main(){
//     int arr[]={1,4,1,3,2,4,3,7};
// int n=sizeof(arr)/sizeof(int);
// counting(arr,n);
//     return 0;
//   }




//    #include<iostream>  
//    #include<algorithm>                                                   sort
//    using namespace std;
//    void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//    }
// int main(){
//   int arr[]={1,4,1,3,2,4,3,7};
//  int n=sizeof(arr)/sizeof(int);
//    sort(arr,arr+n);
// print(arr,n);
//     return 0;
// }



#include<iostream>
using namespace std;
void insertion(char ch[],int n){
for(int i=0;i<n;i++){
    char curr=ch[i];
   int  prev=i-1;
   while(prev>=0&& ch[prev]>curr){
 swap(ch[prev],ch[prev+1]);
 prev--;
   }
   ch[prev+1]=curr;
}
  for(int i=n-1;i>=0;i--){
        cout<<ch[i]<<",";
   }
}
int main(){
char ch[]={'f','b','a','e','c','d'};
int n=sizeof(ch)/sizeof(char);
insertion(ch,n);
return 0;
}